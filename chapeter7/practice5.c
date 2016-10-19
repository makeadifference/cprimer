#include<stdio.h>
int main(void)
{
	char ch;
	ch = getchar();
	
	while(ch!='#')
	{
	switch (ch)
{
	case '.':
	putchar('!');
	break;

	case '!':
{	putchar('!');
	putchar('!');
	break;

}
	
	default:
	putchar(ch);
	break;
	
}
	ch = getchar();
	}

	return 0;

	}
