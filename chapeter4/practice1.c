/* input the first name & second name then print them*/
#include <stdio.h>
int main(void)
{
	char FN [10];
	char SN [10];

	printf("\a please enter your first name:\n");
	scanf("%s", FN);
	printf("\a please enter your second name:\n");
	scanf("%s", SN);
	printf("Hello %s,%s!\n",SN,FN);
	return 0;
}
