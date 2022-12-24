#include<iostream> 
#include<math.h>         //a=2,b=3
using namespace std;

float fx(float x)
{
    return x*x*x-2*x-5;
}

int main()
{
    float a,b;
    cin>>a>>b;

    float x=0;
    while(1)
    {
        x = (a*fx(b)-b*fx(a))/(fx(b)-fx(a));
        cout<<x<<endl;
        
        if(abs(x-a)<=0.0001 || abs(x-b)<=0.0001)
        break;

        if(fx(x)*fx(a)<0)
        b=x;
        else
        a=x;
    }
}