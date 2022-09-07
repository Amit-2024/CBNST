//bisection method89
#include<stdio.h>
#include<math.h>

double fx(double x)
{
	return x*x*x-4*x-9;
}

double mid(double x, double y)
{
	return (x+y)/2;
}

int main()
{
	double a,b;
	a=2,b=3;
	double Mid=0.0;
	int i=1;
	while(fabs(Mid-a)>0.0001 || fabs(Mid-b)>0.0001)
	{
		Mid = mid(a,b);
		printf("%lf %d\n",Mid,i);
		
		if(fx(a)*fx(Mid)<0)
		b=Mid; 
		else
		a=Mid;
		i++;
	}
	return 0;
}
