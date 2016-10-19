/* Transforming the years into seconds */
#include <stdio.h>
int main(void)
{
	int years;
	float seconds = 3.156e7;
	printf("\nPlease input the years you have born:");
	scanf("%d",&years);
	printf("You are %d years old,and you have born for %f seconds\n",
			years, years * seconds);
	return 0;
}
