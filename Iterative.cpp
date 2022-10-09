#include<bits/stdc++.h>
using namespace std;

float fx(float x)
{
    return pow((2*x+5),1/3.0);
}

float diff(float x)
{
    return (1/3)*pow(((2*x+5)),-2/3.0);
}
int main()
{
    float a,b;
    cin>>a>>b;
    float x;
    float mid = (a+b)/2;
    if(diff(mid)<1)
    while(1)
    {
        x = fx(mid);
        cout<<x<<endl;
        if(abs(x-mid)<0.0001)
        break;
        mid=x;
    }
}
