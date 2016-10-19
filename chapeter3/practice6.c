/*夸 与 分子数互化*/
#include <stdio.h>
int main(void)
{
	int kua;
	float W_weight = 3.0e-23;

	printf("Please enter the kua of water:");
	scanf("%d",&kua);
	printf("The numbers of the water is %f",
			kua * W_weight * 950);
	return 0;
}
