#include<stdio.h>
void little(double a ,double b );
int main (void)
{
    double a=1.0;
    double b=2.0;
    little(a,b);
    return 0;
    }

    void little(double a,double b)
    {
    if( a>b)
    printf("the smaller is %f\n",b);
    else
    printf("the smaller is %f\n",a);
    }
