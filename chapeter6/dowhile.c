#include <stdio.h>
int main (void)
{
	int special_num = 5;
	int num;
	printf("Only when you enter a correct number");
	printf(", will this program say congratunations!\n");
	do
	{
		printf("enter a number:\n");
		scanf("%d",&num);
	}while(num != special_num);
	printf("Congratulation! You got it!\n");
	
	return 0;
	}
	
