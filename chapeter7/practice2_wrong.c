//only when you fully understand the problem,can you slove it!
#include<stdio.h> 
#include<string.h>
int main(void)
{
	char ch;
	int zhouqi;
	int quantity;
	int n,n1,n2;
	printf("Please enter something,type'#' to mark the end!\n");
	printf("     char          ASCII     \n");


	while((ch = getchar())!='#')//to control the enter 
{
	quantity = strlen(&ch);//may have something wrong!
	zhouqi = (quantity % 8)+1;


	for(n1=1;n1<zhouqi;n1++)//zhouqi print
{
 	for(n=0;n<8;n++)//to print chariter
{
	putchar(ch);
	ch=getchar();
	}	
	
	printf("          ");//调整间距

}


/*
	for(n2=0;n2<8;n2++)//to print ASCII
{
	printf("%d",putchar(ch));




}
*/
	printf("\n");
}
	return 0;

}
	
