#include <stdio.h>
#define Min_per_Hou 60
int main(void)
{
	int Min;
	printf("Please enter the minute your want to change into hours:\n \a");
	scanf("%d",&Min);
	while (Min > 0)
{	int min = Min % 60;
	int hours = Min /60;
	printf("The minutes your enter equal ");
	printf("%dhours/%dmins\n",hours,min);
	printf("please enter another number:");
	scanf("%d",&Min);
}
	
	return 0;
	}

