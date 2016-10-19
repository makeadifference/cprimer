/* print the float in two different ways*/
#include <stdio.h>
int main (void)
{ 
	float num;
	printf("please enter a float number:\n \a");
	scanf("%f",&num);
	printf("a.输入%.1f或%.1e",num,num);
	printf("b.输入%.3f或%.3e",num,num);
	return 0;
}
