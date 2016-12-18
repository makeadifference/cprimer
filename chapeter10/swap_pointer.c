#include<stdio.h>
void interchanger(int * u,int *v);
int main(void)
{
	int x=2 ,y=5;
	printf("Originally x =%d , y =%d \n",x,y);
	interchanger(&x,&y);
	printf("Now x = %d ,y = %d \n",x,y);
	return 0;
}

void interchanger(int *u ,int *v)
{
	int temp;
	temp =*u;
	*u = *v;
	*v =temp;
}
