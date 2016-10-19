/* platinum.c -- your weight in platinum*/
#include <stdio.h>
int main(void)
{
	float weight;//your weight
	float value; //your value

	printf("Are you worth your weight in platinum\n");
	printf("Let's check it out. \n");
	printf("Please enter your weight in pounds:");
	/* accept the input of the user */
	scanf("%f",&weight);
	//assume the value of the platinum is per pound $1700
	
	value = 1700 * weight * 14.5833;
	printf("your weight in platinum is worth $%.2f. \n ,value);
	printf("	
