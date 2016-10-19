/*读取一个浮点数，并打印成小数点形式，指数形式，和十六进制计数法*/
#include <stdio.h>
int main (void)
{
	float num;


	printf("Enter a floating-point value:\n");
	scanf("%f",&num);
	printf("fixed-point notation:  %.6f\n",num);
	printf("exponential notation: %.5e\n",num);
	printf("p notation: %a\n",num);

	return 0;
}
