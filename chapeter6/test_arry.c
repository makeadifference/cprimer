#include<stdio.h>
int main(void)
{
	double ch1[8];
	int n;
	while(scanf("%lf",ch1)==1)
{	
	for(n=0;n<8; n++)
	printf("%4.2lf",ch1[n]);
	if(n==7)
	break;

	}

		return 0;
		
	}
