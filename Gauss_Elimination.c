#include <stdio.h>
void main(){
  float a[5][5], x[5], pivot, sum;
  int i, j, k, n;
  printf("Enter the number of equations");
  scanf("%d", &n);
  for (i = 1; i <= n; i++){
    for (j = 1; j <= (n + 1); j++){
      printf("Enter the coefficient at %d%d position", i, j);
      scanf("%f", &a[i][j]);
    }
  }
  for (i = 1; i < n; i++){
    for (j = i + 1; j <= n; j++){
      pivot = a[j][i] / a[i][i];
      for (k = 1; k <= (n + 1); k++){
        a[j][k] = a[j][k] - pivot * a[i][k];
      }
    }
  }
  printf("The triangular Matrix is \n");
  for (i = 1; i <= n; i++){
    for (j = 1; j <= (n + 1); j++){
      printf("%f\t", a[i][j]);
    }
    printf("\n");
  }
  for (i = n; i >= 1; i--){
    sum = 0;
    for (j = i + 1; j <= n; j++){
      sum = sum + a[i][j] * x[j];
    }
    x[i] = (a[i][n + 1] - sum) / a[i][i];
  }
  printf("The solution is\n");
  for (i = 1; i <= n; i++){
    printf("%f\n", x[i]);
  }
}