#include<stdio.h>
#define f(x,y) x+y;
int main(){
	float x0,y0,xn;
	int n;
	
	printf("Enter the value of x0 & y0 : ");
	scanf("%f%f",&x0,&y0);
	printf("Enter value of xn: ");
	scanf("%f", &xn);
	printf("Enter the value of n: "); 
	scanf("%d",&n);
	
	float fun,yn;
	float h = (xn-x0)/n;
	int i;
	
	printf("at: x\t\t value is\n");
	
	for(i=0; i<n; i++){
		fun = f(x0,y0);
		yn = y0+h*fun;
		printf("%f\t%f\n",x0,yn);
		x0=x0+h;
		y0=yn;
	}
	
}
