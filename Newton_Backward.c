#include<stdio.h>
int main(){
    float a[20][20], xp, yp=0, p, h, px=1;
    int i, j, n, fact=1;
    printf("Enter the number of data items:\n");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter value of x:");
        scanf("%f", &a[i][0]);
        printf("Enter value of y:");
        scanf("%f", &a[i][1]);
    }
    for(j=2; j<=n; j++){
        for(i=j-1; i<=n; i++){
            a[i][j] = a[i][j-1]-a[i-1][j-1];
        }
    }
    printf("The backward difference table is:\n");
    for(i=0; i<n; i++){
        for(j=0; j<2+i; j++){
            printf("%0.3f\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the interpolation point:\n");
    scanf("%f", &xp);
    h = a[n-1][0] - a[n-2][0];
    p = (xp - a[n-1][0])/h;
    yp = a[n-1][1];
    for(i=1; i<n; i++){
        px = px * (p+i-1);
        fact = fact *i;
        yp = yp + (a[n-1][i+1]*px)/fact;
    }
    printf("The interpolated value for %f is %f", xp, yp);
    return 1;
}