#include<stdio.h>
int main(void)
{
	char ch;
	int n=0;
	printf("please enter something!(type # to end)\n");
	ch =getchar();
	while(ch!='#')
{
	putchar(ch);
	printf("'ASCii is:%d",ch);
	ch =getchar();
	n++;
	if(n==8)
	printf("\n");
	if(n>8)
	n=1;
	}
	printf("\n");
	return 0;
	}
	
