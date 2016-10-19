#include<stdio.h>
#include<string.h>
int main(void)
{
	char ch[20];
	char ch1;
	int num;
	int n;
	printf("Please enter some charpter!\n");
	scanf("%s",ch);
	for(n = strlen(ch);n>=0;n--)

		printf("%c",ch[n]);


		return 0;
}
		
