#include<stdio.h>
int main(void)
{
	int days;
	printf("How many days do you want to tranform?\n");
	scanf("%d",&days);
	printf("%d days are %d weeks, %d days.\n",days ,days /7, days % 7);
	return 0;
	}
