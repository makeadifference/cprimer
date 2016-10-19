#include<stdio.h>
int main(void)
{
	char ch;
	printf("please enter something ,(type '#' to end)\n");
	ch =getchar();
	while(ch!='#')
{	putchar(ch);

	ch=getchar();




	}

	return 0;
	}
