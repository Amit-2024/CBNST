#include<iostream>
using namespace std;

float fx(float x){
    return 1/(1+x*x);
}

int main(){
    float a,b;
    cout<<"Enter the limits: ";
    cin>>a>>b;
    float n;
    cout<<"Enter the value of n: ";
    cin>>n;

    float h;
    h = (b-a)/n;
    float sum=0;
    
    sum = fx(a)+fx(b);
    
    float sum1,sum2;
    sum1=sum2=0;
    int j=1;
    for(float i = a+h; i<b; i=i+h){
        if(j%3==0){
            sum1 += fx(i);
        }
        else{
            sum2 += fx(i);
        }
        j++;
    }

    sum = 3*(sum + 2*sum1+ 3*sum2);

    printf("sum is: %f", sum*h/8);
}