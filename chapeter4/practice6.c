#include <stdio.h>
int main (void)
{
	char FN [30];
	char SN [30];

	printf("please enter your name:\a \n");
	scanf("%s",FN);
	scanf("%s",SN);
	printf("%s %s \n",FN,SN);
	printf("%*zd %*zd \n",strlen(FN),strlen(FN),
	strlen(SN),strlen(SN));
	return 0;
	}
