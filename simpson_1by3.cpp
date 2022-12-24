#include<iostream>
using namespace std;

float fx(float x){
    return 1/(1+x*x);
}

int main(){
    float a,b;
    printf("Enter the limits: ");
    scanf("%f%f",&a,&b);
    float n;
    printf("Enter the value of n: ");
    scanf("%f",&n);

    float h;
    h = (b-a)/n;
    float sum=0;
    sum = fx(a)+fx(b);
    float sum1,sum2;
    sum1=sum2=0;
    int j=1;
    for(float i = a+h; i<b; i=i+h){
        if(j%2==0){
            sum1 += fx(i);
        }
        else{
            sum2 += fx(i);
        }
        j++;
    }

    sum = sum + 2*sum1+ 4*sum2;

    printf("sum is: %f", sum*h/3);
}