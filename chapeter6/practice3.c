#include<stdio.h>
int main (void)
{
	int hang , lie;
	char ch;
	for(hang =1;hang<=6;hang++)
{
	for(lie = 1;lie<=hang;lie++)
	{	ch ='G' -lie;
		printf("%c",ch);
		}
	printf("\n");
	}
	return 0;
}
		
