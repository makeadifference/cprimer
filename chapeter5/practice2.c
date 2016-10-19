#include<stdio.h>
int main(void)
{
	int num;
	printf("Please enter a number:\a \n");
	scanf("%d",&num);
	int n = num + 5;
	while(num++ < n)
	printf("%d\n",num);
	return 0;
}
