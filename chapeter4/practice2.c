#include <stdio.h>
#include <string.h>
int main (void)
{
	char name[30];
	printf("please enter your name: \n \a");
	scanf("%s",name);
	printf("A:\"%s\" \n",name);
	printf("B:\"%20s\" \n",name);
	printf("C:\"%-20s\" \n",name);
	int width = strlen(name) + 3;
	printf("D:\"%*s\" \n",width ,name);
	return 0;
}
