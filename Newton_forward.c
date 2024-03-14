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
        for(i=0; i<=n-j; i++){
            a[i][j] = a[i+1][j-1]-a[i][j-1];
        }
    }
    printf("The forward difference table is:\n");
    for(i=0; i<n; i++){
        for(j=0; j<=n-i; j++){
            printf("%f", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the interpolation point:\n");
    scanf("%f", &xp);
    h = a[1][0] - a[0][0];
    p = (xp - a[0][0])/h;
    yp = a[0][1];
    for(i=1; i<n; i++){
        px = px * (p-i+1);
        fact = fact * i;
        yp = yp + (a[0][i+1]*px)/fact;
    }
    printf("The interpolated value for %f is %f", xp, yp);
    return 1;
}