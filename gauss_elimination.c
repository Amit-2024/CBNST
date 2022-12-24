#include<stdio.h>
#include<math.h>
#define n 3
void convertToUpper(float matrix[][n+1]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j>i){
                float c = matrix[j][i]/matrix[i][i];
                for(int k=0; k<n+1; k++){
                    matrix[j][k]=matrix[j][k]-(c*matrix[i][k]);
                }
            }
        }
    }
}

void substitute(float matrix[][n+1], float ans[]){
    ans[n-1]=matrix[n-1][n]/matrix[n-1][n-1];

    for(int i=n-2; i>=0 ;i--){
        int sum=0;
        for(int j=i+1; j<n; j++){
            sum=sum+matrix[i][j]*ans[j];
        }
        ans[i]=(matrix[i][n]-sum)/matrix[i][i];
    }

    for(int i=0; i<n;i++){
        printf("%.3f\t",ans[i]);
    }
}

int main(){
    // int n;
    // printf("Enter the value of n : ");
    // scanf("%d",&n);

    float matrix[n][n+1];

    printf("Enter the equation coefficients: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<n+1; j++){
            scanf("%f",&matrix[i][j]);
        }
    }

    float ans[n];

    convertToUpper(matrix);
    substitute(matrix,ans);
}