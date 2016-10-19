#include<stdio.h>
int main (void)
{
	const int max=6;
	int hang ,lie;
	char ch;
	
	for (hang=0;hang <= max;hang++)
{
	int n ;
	n +=hang;
	n++;	
	char ch1 ='A'+n  ;
 	for (lie=0;lie <=hang;lie++)
	{
		ch =ch1 + lie;
		printf("%c",ch);
		}
		printf("\n");
}
	return 0;
}
