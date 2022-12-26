#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    float a[n][n+1];

    for(int i=0; i<n; i++){
        scanf("%f",&a[i][0]);;
    }

    for(int i=0; i<n; i++){
        scanf("%f",&a[i][1]);
    }

    for(int i=2; i<n; i++){
        for(int j=0; j<n-i+1; j++){
            a[j][i] = a[j+1][i-1]-a[j][i-1]; 
        }
    }

    float b;
    printf("Enter the value to find result: ");
    scanf("%f",&b);

    float h = a[1][0]-a[0][0];

    float u = (b - a[n-1][0])/h;

    float y1 = a[n-1][1];

    int j=2;
    float fact= 1;
    for(int i=n-2; i>=0; i--){
        y1 += (u*a[i][j])/fact;
        fact*=j;
        u*=(u+(j-1));
        j++;
    }

    printf("\n%f",y1);
}