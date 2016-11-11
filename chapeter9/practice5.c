#include<stdio.h>
void large_of(double a,double b);
int main(void)
{
double num1,num2;
num1=53.0;
num2=10.0;
printf("now num1=%f,num2=%f",num1,num2);
large_of(num1,num2);
return 0;
}


void large_of(double a,double b)
{
double changer;

if (a>b)
changer =a;
else
changer =b;

a=b=changer;
printf("But now num1=%f,num2=%f\n",a,b);
}
