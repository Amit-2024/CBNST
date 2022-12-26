#include<iostream>
using namespace std;

struct s{
    float x;
    float y;
    float xx;
    float xy;
}s[50];

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    struct s s[n];
    cout<<"Enter the values of x: ";
    for(int i=0; i<n;i++){
        cin>>s[i].x;
    }
    cout<<"Enter the values of y: ";
    for(int i=0; i<n; i++){
        cin>>s[i].y;
    }

    for(int i=0; i<n;i++){
        s[i].xy = s[i].x*s[i].y;
        s[i].xx = s[i].x*s[i].x;
    }

    float x_sum,y_sum,xy_sum,xx_sum;
    for(int i=0; i<n; i++){
        x_sum+=s[i].x;
        y_sum+=s[i].y;
        xy_sum+=s[i].xy;
        xx_sum+=s[i].xx;
    }

    float a = ((xx_sum*y_sum)-(xy_sum*x_sum))/((n*xx_sum)-(x_sum*x_sum));
    float b = ((n*xy_sum)-(x_sum*y_sum))/((n*xx_sum)-(x_sum*x_sum));

    cout<<"value of a :"<<a<<endl;
    cout<<"value of b: "<<b;
}