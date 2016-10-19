#include<stdio.h>
int main(void)
{
	char ch[5];
	int n;
	int n1;
	printf("Please enter some charpter:\n");
	for(n=0;n<5;n++)
{	scanf("%c",&ch[n]);
	printf("it work\n");
	}
	for(n1=0;n1<5;n1++)
{
	printf("%c\n",ch[n1]);
	printf("it work\n");
	}
	
	return 0;
	}
