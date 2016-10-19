#include <stdio.h>
#include <limits.h>
#include <float.h>
// To test the details of the content

int main (void) 
{
// testing the limits.h
	 printf(" the bits of char is :%d \n",	CHAR_BIT);
	printf(" the max of the char is:%d \n", CHAR_MAX);
       	printf(" the min of the char is:%d \n", CHAR_MIN);
	printf(" the max of the signed char is:%d \n",SCHAR_MAX);
	printf(" the min of the signed char is:%d \n",SCHAR_MIN);
	printf(" the max of the unsigned char is:%d \n",UCHAR_MAX);
	printf(" the max of the short is:%d \n",SHRT_MAX);
	printf(" the min of the short is:%hd\n",SHRT_MIN);
	printf(" the max of the int is :%d \n", INT_MAX);
	printf(" the min of the int is:%d \n", INT_MIN);
	printf(" the max of the unsigned int is:%u \n",UINT_MAX);
	printf(" the max of the long is: %ld  \n",LONG_MAX);
        printf(" the min of the long is%ld\n",LONG_MIN);	
	printf(" the max of the unsigned long is:%lu\n",ULONG_MAX);
	printf(" the max of the long long is:%lld \n",LLONG_MAX);
	printf(" the min of the long long is:%ld \n",LLONG_MIN);
        printf(" the max of the unsigned long long is:%llu \n",ULLONG_MAX);	
	
// tesing the float.h
	
	printf(" the bits of the nail of the float is :%d \n", FLT_MANT_DIG);
	printf(" the least usful number of the float is:%d \n", FLT_DIG);
	printf(" the max of float is:%f \n", FLT_MAX);
	printf(" the min of float is:%f \n", FLT_MIN);

	return 0;
}
