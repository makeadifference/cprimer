#include<stdio.h>
void function(int a,int b ,int c);
int main (void)
{
double a,b, c ;
a=b=c=1342.34;

int a1,b1,c1;
/*
a1 =&a;
b1 =&b;
c1 =&c;
*/
function(&a,&b,&c);
return 0;
}

void function(int a, int b ,int c)
{
printf("a's adress number is %d\n",a);
printf("b's adress number is %d\n",b);
printf("c's adress number is %d\n",c);
}
