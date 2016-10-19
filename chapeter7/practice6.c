#include<stdio.h>
int main(void)
{
	char ch;
	int n=0;
	
	//loop
	while((ch=getchar())!='#')
{
	if(ch=='e')
{	
	ch=getchar();
	if(ch=='i')
	n++;
}
}

printf("The 'ei' have appear %d times\n",n);
 	
	return 0;

}
	

