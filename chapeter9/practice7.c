#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
	int ch;
	while((ch =getchar())!=EOF)
{
	if(isalpha(ch))
{	
	tolower(ch);
	printf("%c is a alpha \n",ch);
	printf("And it is the %d \n",ch-96);
	
}
	else
	printf("%c is not a alpha\n",ch);


}
	return 0;

}
