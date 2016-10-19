#include<stdio.h>
#include<ctype.h>
int main (void)
{	char ch;
	printf("enter something\n");
	 int space,line,other;
	 space=line=other=0;
	//to anlanyze
	while((ch=getchar()) !='#')
{	if(isspace(ch))
	ch++;
	if(ch=='\n')
	line++ ;
	else
	other++ ;
	}
	printf("you have entered %d spaces;%d lines;and %d others\n"
	,space,line,other); 
	

	return 0;
	}
