/*This program will use all the escape sequence */
#include <stdio.h>
int main (void)
{
	printf("\a \a \a \a ");
// to test the \d
	printf("  abcdefghijklmnopqrstuvwxyz \b \b \b \b \n");
	printf("\babcdefghijklmnopqrstuvwxyz\n");
	printf("  abcdefghijklmnopqrstuvwxyz");
// to test the \t & \v
	printf("                \t abc\n");
	printf("   \t abc\n");	
	printf(" abc\n");
	printf(" abc\n ");
	printf(" \v abc\n ");
	printf(" \v              abc  \n");
	printf(" abc \r abc");
	printf(" \f abc");


	





























	return 0;
}

