//This is a program that using a function to count the square of a number
#include<stdio.h>
void square(double num);
int main (void)
{
	double num;
	printf("Please enter a number you want to count:\n");
	scanf("%lf",&num);
	square(num);
	return 0;
}

void square(double num)
{
	printf("%f\n",num * num * num);
}
