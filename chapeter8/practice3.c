#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int big=0;
	int small=0;
	int ch;
	printf("Redirect a file to count thier form(big or small:\n");
	while((ch=getchar())!=EOF)
	{
		if(isupper(ch))
		++big;
		if(islower(ch))
		++small;

	}
	printf("The number of upper charpters are %d"
	" and the number of lower charpters are %d\n",big ,small);
	return 0;

}

	
