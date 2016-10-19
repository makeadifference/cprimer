#include<stdio.h>
#define Cm_per_In  0.393700
#define Cm_per_Fe  0.0328084
int main(void)
{
	float height;
	printf("Please enter your height(cm):\n");
	scanf("%f",&height);
	while (height > 0)
{	printf("%f cm = %f feet, %f inches\n",height, height * Cm_per_Fe ,height  * Cm_per_In);
	printf("Please enter your height(cm):(<=0 to quit)\n");
	scanf("%f",&height);	
}
	printf("bye\n");
	return 0;
}

