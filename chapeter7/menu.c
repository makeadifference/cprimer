#include<stdio.h>
int main(void)
{
	printf("What can I do for you? Here is the menu：\n");
	printf("***********************************************************\n");
	printf("a :say hello!                                b :say  sorry!\n");
	


	printf("c :say hello world!                          d :quit!      \n");
	printf("***********************************************************\n");
	char ch;
	ch =getchar();
	

	switch (ch)
{
	case 'a':
	printf("Hello!\n");
	break;

	case 'b':
	printf("I am sorry for you !\n");
	break;

	case 'c':
	printf("Hello World!\n");
	break;

	case 'd':
	printf("quiting...\n");
	break;

	default:
	printf("I can't finger out what's you options, please enter again!");
	break;


}
	return 0;

}
