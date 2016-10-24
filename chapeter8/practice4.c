#include<stdio.h>
int main(void)
{
	int ch;
	int n=0;
	int epual=0;
	int sum=0;
	while((ch=getchar())!=EOF)
{
	//head
	while(!ispunct(ch)&&!isspace(ch))
{
	++n;
	sum+=n;



	//end
	if(ispunct(ch)||isspace(ch))

{
		n++;//debug
		continue;
	}

}
}
	printf("The number of word(n>1?n<2 s: )	is:%d\n",n);
	printf("There are %d charpters per word equally\n",sum/n);

	return 0;

}
