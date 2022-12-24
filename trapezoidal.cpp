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
    for(float i = a+h; i<b; i=i+h){
        sum += 2*fx(i);
    }

    printf("sum is: %f", sum*h/2);
}