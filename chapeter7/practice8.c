
#include<stdio.h>
//define some float
#define plus 1.5
#define  pre_300 0.15
#define  nxt_150 0.20
#define rest 0.25
void secretary(float hours,float salary_per_hour);
int main (void)
{

	float hours;
	char ch;
	float salary_per_hour;

// creating a menu let you to select
/*********************************************************************/

	printf("***********************************************\n");
	printf("a: $8.75/hr                         b: $9.33/hr\n");
	printf("\n");
	printf("c: $10.00/hr                        d: $11.20/hr\n");
	ch =getchar();
	switch (ch)
{
	case 'a':
	salary_per_hour=8.75;
	break;

	case 'b':
        salary_per_hour=9.33;
	break;

	case 'c':
        salary_per_hour =10.0;
	break;

	case 'd':
        salary_per_hour =11.20;
	break;

	default :
        salary_per_hour =10.0;
	break;
}
/**************************************************************************/
	printf("Enter the hours you work per week:\n");
	scanf("%f",&hours);
	secretary(hours,salary_per_hour);

	return 0;
}



void secretary(float hours,float salary_per_hour)
{
 

 	
	float salary;
	float tax;
	
//calculations
	
	if(hours> 40)
	hours = (hours-40)*1.5+40;

	salary =hours* salary_per_hour;	
	if (salary<=300)
	tax=salary*pre_300;
	if (salary>300&& salary<=4500)
	tax =(salary-300)*nxt_150+(300*pre_300);
	if(salary>450)
	tax =(salary-450)*rest + (300*pre_300) + (150*nxt_150);

	printf("Your total salary is:%.2f\n",salary);
	printf("Yoor total tax is:%.2f\n",tax);
	printf("Your real salary only:%.2f",salary-tax);
}
