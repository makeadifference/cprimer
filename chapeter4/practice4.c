/*practice4.c print the name and height*/
#include <stdio.h>
int main(void)
{
	float height;
	char name[20];
	printf("hello, what is your name?:\n\a");
	scanf("%20s", name);
	printf("what is your height?:(cm) \n\a");
	scanf("%f", &height);
	printf("%20s, you are %f cm tall\n",name ,height);
       	return 0;
}
	
