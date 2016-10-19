#include <stdio.h>
int main(void)
{
	float speed;
	float size;

	printf("please enter your download speed:(Mb/s)\a \n");

	scanf("%f",&speed);
	printf("please enter the size of the file:(MB)\a \n");
	scanf("%f",&size);
	printf("At %.2f megabits persecond, a file of %.2f megabytes\n", speed , size);
	float time = size * 8 / speed;
	printf("download in %.2f seconds.",time);
	return 0;
}
	
