#include<stdio.h>
#define num1 1.0
#define num2 1.0
void arravage(double a,double b);
int main(void)
{

arravage(num1,num2);
return 0;
}

void arravage(double a,double b)
{
double m,n,p,q;
	n=1/num1;
	m=1/num2;
	p=n+m;
	q=(1/q)/2;
printf("the arravage is %f\n",q);
}
	


