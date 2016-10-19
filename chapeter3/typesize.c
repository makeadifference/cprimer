


/* To print the size of the kinds of some dates */
#include <stdio.h>

int main (void)
{
	printf("Type int has a size of %zd bytes. \n",sizeof(int));

	printf("Type char has a size of %zd bytes. \n",sizeof(char));
	
	printf("Type long has a size of %zd bytes. \n",sizeof(long));

	printf("Type double has a size of %zd bytes. \n",sizeof(double));

	printf("Type long double has a size of %zd bytes.\n",sizeof(long double));

        printf("Type long long int has a size of %zd bytes.\n",sizeof(long long int));
	return 0;
		}





