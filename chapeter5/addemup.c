#include<stdio.h>
int main(void)
{
	int count , sum ,days;

	count = 0;
	sum =0;
	printf("enter the days you want to count:\n");
	scanf("%d",&days);
	
	while (count++ < days)
		sum = sum + count*count;
		printf("sum = %d\n",sum );

		return 0;
}
