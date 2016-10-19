#include<stdio.h>
int main(void)
{
	int num;
	int sum_o,sum_j;
	sum_o = sum_j =0;
	int q,o;
	q=o=0;
	float arrage_q,arrage_o;
//	char ch;
	




	printf("enter some number to count their summary and arrage\n");
//	ch =getchar();
	while(scanf("%d",&num)==1&&num!=0)
{
	printf("testing ,it work!\n");
	if((num%2)==0)
		{
	o++;
	sum_o +=num;
	}
	if((num%2)!=0)
	{
	q++;
	sum_j +=num;
	}
//	scanf("%d",&num);
	
	}

	//introdution
	arrage_q = sum_j /q;
	arrage_o = sum_o /o;
	printf("The number of 'oushu' is %d\n",o);
	printf("The number of 'jishu' is %d\n",q);
	printf("The number of 'oushu' is %f\n",arrage_o);
	printf("The number of 'jishu' is %f\n",arrage_q);
	printf("The total of 'jishu' is %d\n",sum_j);
	printf("The tatal of 'ouwhu' is %d\n",sum_o);

	return 0;

}
