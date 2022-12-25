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
    int c;
    float h;
    h = (b-a)/n;
    float sum=0;
    sum = fx(a)+fx(b);
    int j=1;
    float sum1,sum2;
    printf("Enter the choice : \n1.trapezoidal\n2.simpson1by3\n3.simpson1by8\n4.exit\n");
    scanf("%d",&c);

    switch (c)
    {
    case 1:
    for(float i = a+h; i<b; i=i+h){
        sum += 2*fx(i);
    }

    printf("sum is: %f", sum*h/2);
    break;

    case 2: 
    sum1=sum2=0;
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
    break;

    case 3: 
    sum1=sum2=0;
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
    break;

    default:
        printf("Enter the valid input\n");
        break;
    }
}
