#include<iostream> //a=2,b=3    
using namespace std;

float fx(float x)
{
    return x*x*x-2*x-5;
}

int main()
{
    float a,b;
    cin>>a>>b;
    float mid=0;
    int i=1;
    while(abs(a-mid)>0.0001 || abs(b-mid)>0.0001)
    {
        mid=(a+b)/2;
        cout<<"value->"<<mid<<" at iteration->"<<i<<endl;
        if(fx(a)*fx(mid)<0)
        b=mid;
        else
        a=mid;

        i++;
    }
}

