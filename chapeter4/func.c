/* define a function with parameter*/

#include<stdio.h>
void hello(int n);
int main(void)
{
	int times;
	printf("enter the times of saying hello:\n \a");
	scanf("%d",&times);
	hello(times);
	return 0;
}
void hello(int n)
	
{
	while (n-- > 0)
	printf("hello\n");
}
