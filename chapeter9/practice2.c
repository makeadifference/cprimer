#include<stdio.h>
void magic(char ch,int line,int quence);
int main(void)
{
char ch='A';
int line =4;
int quence=4;
	magic(ch,line,quence);
	return 0;
}

void magic(char ch, int line,int quence)
{
int n =0;
int m=0;
//to print the line first!
for(n=0;n<line;n++)
//to print the quence!
{
for(m=0;m<quence;m++)
printf("%c",ch);

printf("\n");
}
}



