#include<stdio.h>
#define n 3
void converToupper(float matrix[][n+1]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j>i){
                float ratio = matrix[j][i]/matrix[i][i];

                for(int k=0; k<n+1; k++){
                    matrix[j][k] = matrix[j][k] - (ratio*(matrix[i][k]));
                }
            }
        }
    }
}

void substitute(float matrix[][n+1]){
    
    float ans[n];
    ans[n-1] = matrix[n-1][n]/matrix[n-1][n-1];
    float sum=0;
    for(int i=n-2; i>=0; i--){
        sum=0;
        for(int j=i+1; j<n; j++){
            sum += matrix[i][j]*ans[j];
        }
        ans[i] =  (matrix[i][n]-sum)/matrix[i][i];
    }

    for(int i=0; i<n; i++){
        printf("%f\t",ans[i]);
    }
}

int main(){

    int size;
    scanf("%d",&size);
    float x[size],y[size];
    for(int i=0; i<size; i++){
        scanf("%f",&x[i]);
    }
    for(int j=0; j<size; j++){
        scanf("%f",&y[j]);
    }

    float x_sum,y_sum,xy_sum,xx_sum,xxx_sum,xxxx_sum,xxy_sum;
    x_sum=y_sum=xy_sum=xx_sum=xxx_sum=xxxx_sum=xxy_sum=0;
    
    for(int i=0; i<size; i++){
        x_sum+=x[i];
        y_sum+=y[i];
        xy_sum+=x[i]*y[i];
        xx_sum+=x[i]*x[i];
        xxx_sum+=x[i]*x[i]*x[i];
        xxxx_sum+=x[i]*x[i]*x[i]*x[i];   
        xxy_sum+=x[i]*x[i]*y[i];
    }

    float matrix[3][4];

    matrix[0][0]=xx_sum;
    matrix[0][1]=x_sum;
    matrix[0][2]=size;
    matrix[0][3]=y_sum;
    matrix[1][0]=xxx_sum;
    matrix[1][1]=xx_sum;
    matrix[1][2]=x_sum;
    matrix[1][3]=xy_sum;
    matrix[2][0]=xxxx_sum;
    matrix[2][1]=xxx_sum;
    matrix[2][2]=xx_sum;
    matrix[2][3]=xxy_sum;


    converToupper(matrix);
    substitute(matrix);
}