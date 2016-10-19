#include<stdio.h>
int main(void)
{
	int up ,down;
	int n;           //to count the times of loop
	int square,sum;
	int x;
	square = sum =0;      //initial
	printf("Please enter a maximum and a minimun\n");
	x=scanf("%d %d",&up ,&down);
	while(x==2)
{
	printf("it work\n");
	if(up <down)
	continue;
	for(n=down;n<=up;n++)
{
    	square = n*n;
	sum += square;
	}
break;

}
	

	//report the result 
	printf("the sumary is %d :\n",sum);
	return 0;
	}

