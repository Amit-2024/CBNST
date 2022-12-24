#include<stdio.h>
#include<math.h>
#define n 3
void convertToDiagonal(float matrix[][n+1]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j!=i){
                float c = matrix[j][i]/matrix[i][i];
                for(int k=0; k<n+1; k++){
                    matrix[j][k]=matrix[j][k]-(c*matrix[i][k]);
                }
            }
        }
    }

    for(int i=0; i<n;i++){
        printf("%.3f\t",matrix[i][n]/matrix[i][i]);
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

    convertToDiagonal(matrix);
}