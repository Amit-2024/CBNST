#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the values of x: ");
    float a[n][n+1];
    for(int i=0; i<n; i++){
        scanf("%f",&a[i][0]);
    }

    printf("Enter the values of y: ");
    for(int i=0; i<n; i++){
        scanf("%f",&a[i][1]);
    }

    for(int i=2; i<n; i++){
        for(int j=0; j<n-i+1; j++){
            a[j][i] = a[j+1][i-1]-a[j][i-1];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0;j<=n-i; j++){
            printf("%f\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the value of b: ");
    float b;
    scanf("%f",&b);
    float h = a[1][0]-a[0][0];
    // a + hu = b // a- initial value of table and b = to where find
    // so to obtain value of u

    float u = (b - a[0][0])/h;

    float y1 = a[0][1];
    float fact = 1;
    for(int i=2; i<=n; i++){
        y1 += (u*a[0][i])/fact;
        fact*=i;
        u *= (u-(i-1));
    }

    printf("\n%f",y1);
}