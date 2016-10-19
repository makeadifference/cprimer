#include<stdio.h>
int main(void)
{
	const int bit=10;
	int n=0;
	printf("now n is:%d",n);
	printf("enter a new number to change the n:\n \a");
	scanf("%d",&n);
	printf("now the n is %d :\n",n);
	n += bit;
	printf("and now n is %d\n",n);
	return 0;
}
