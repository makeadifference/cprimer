//This is a program that to tranform the fomamt of 3 tempuratures
#include <stdio.h>

void Temperatures(double tmp);
int main(void)
{
	double tmp;
	printf("请输入华氏温度：\n");
	scanf("%lf",&tmp);
//	int back =scanf("%lf",&tmp);
	Temperatures(tmp);
/*	while (back > 0)
{	scanf("%lf",&tmp);
	Temperatures(tmp);
	back = scanf("%lf",&tmp);
	}          */
	return 0;
	
}

void Temperatures(double tmp)
{
	float const hua = -32.0;
	float const kai = 273.16;
	printf("摄氏度：%.2f\n",5.0/9.0*(tmp + hua ));
	printf("开氏温度：%.2f\n",5.0/9.0*(tmp -32.0) + kai);

	} 

