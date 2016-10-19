#include<stdio.h>
#include<float.h>
int main(void)
{
	double num1 = 1.0 / 3.0;
	float num2 = 1.0 / 3.0;
	printf("num1: %.6e %.12e %.16e \n",num1,num1,num1);
	printf("num2: %.6e %.12e %.16e \n",num2,num2,num2);
	printf("FLT_DIG:%d",FLT_DIG);
	printf("DBL_DIG:%d",DBL_DIG);
	return 0;
	}
	 
