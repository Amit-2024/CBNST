#include<iostream>      //a=1, b =2
using namespace std;

float fx(float x)
{
    return x*x*x*x-x-10;
}

float diff(float x)
{
    return 4*x*x*x-1;
}

int main()
{
    float a,b;
    cin>>a>>b;
    float mid=0;
    int i=1;
    mid=(a+b)/2;
    cout<<"value->"<<mid<<" at iteration->"<<i<<endl;
    i++;
    while(1)
    {
        
        float x = mid-fx(mid)/diff(mid);
        cout<<"value->"<<x<<" at iteration->"<<i<<endl;
        
        if(abs(x-mid)<=0.0001)
        break;
        
        mid=x;
        i++;
    }
}
