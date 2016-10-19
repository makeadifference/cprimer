#include<stdio.h>
int main(void)
{
	int n = 0;
	int m = 0;
	n++;
	printf("n:%d\n",n);
	++n;
	printf("n:%d\n",n);
	printf("m:%d\n",m++);
	printf("m:%d\n",++m);
	return 0;
}
