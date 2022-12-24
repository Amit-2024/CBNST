#include<stdio.h>
#include<math.h>


// for order 4
float fx(float x, float y){
    return x+y;
}

int main(){
    float x0,xn,y0;
    printf("Enter the value for x0 & xn : ");
    scanf("%f%f",&x0,&xn);
    printf("Enter the value for y0: ");
    scanf("%f",&y0);
    float h;
    printf("Enter the value of h: ");
    scanf("%f",&h);
    float n = (xn-x0)/h;

    float k;

    for(int i=0; i<n; i++){

        float k1 = h*fx(x0,y0);
        float k2 = h*fx(x0+h/2,y0+k1/2);
        float k3 = h*fx(x0+h/2,y0+k2/2);
        float k4 = h*fx(x0+h,y0+k3);
        
        float sum = (k1+2*k2+2*k3+k4);
        float y = y0+sum*1/6;
        printf("%f\n",y);

        x0=x0+h;
        y0=y;
    }
}