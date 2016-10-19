#include<stdio.h>
int main(void)
{
	char ch;
	int n=0;
	printf("please enter something(type '#' to end\n");
	ch =getchar();
	while(ch!='#')
{
	if(ch=='.')
{
	putchar('!');
	n++;
}
	if(ch=='!')
	{putchar('!');
	putchar(ch);
	n++;
	}
	else
	putchar(ch);
	ch=getchar();
}
	//report the number
	
	printf("\nThis program have done %d changes!\n",n);
	return 0;
}
