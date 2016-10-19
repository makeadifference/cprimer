/*#include<stdio.h>
int main(void)
{
	double ch1[8],ch2[8];
	int n;
	printf("Please enter 8 number(double):\n\a");
	while(	scanf("%lg",ch1)==1)
	{
		for(n=0;n<=7;n++)

	{
		printf("%.2f\n",ch1[n]);
		ch2[n]+=ch1[n];
		printf("%.2f\n",ch2[n]);
	}
	}
	return 0;
	}
		 

*/
//now I am rebuilding this program!

#include<stdio.h>
int main(void)
{
	double array1[5],array[5];
	int n;
	printf("Please enter 5 number(double):\n");
	for(n=0;n<5;n++)
{
	scanf("%lf",&array1[n]);
}
	//test
	for(n=0;n<5;n++)
	{
		printf("%lf\n",array1[n]);
	}
	return 0;
}


























