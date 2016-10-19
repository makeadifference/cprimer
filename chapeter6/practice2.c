#include<stdio.h>
int main(void)
{

	int hang ,lie;
	for (hang =1;hang <=5;hang++)
		{for (lie =1;lie <=hang;lie++ )
			printf("$");
			printf("\n");
		}
	return 0;
}
