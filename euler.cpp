#include<iostream>
using namespace std;

float fx(float x,float y){
    return x+y;
}

int main(){
    float x0,xn;
    printf("Enter the value for x0 & xn : ");
    scanf("%f%f",&x0,&xn);
    
    float n;
    printf("Enter the value of n: ");
    scanf("%f",&n);

    float h = (xn-x0)/n;
    float y0 = 1;
    float y;
    for(int i=0; i<n; i++){
        y = y0 + h*fx(x0,y0);
        x0=x0+h;
        y0=y;

        printf("%f\n",y);
    }
}