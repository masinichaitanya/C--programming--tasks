#include<stdio.h>
#include<stdlib.h>
void main()
{
	float celsius,farenheit;
	printf("\nEnter temperature in celsius:");
	scanf("%f",&celsius);
	farenheit=(9*celsius/5)+32;
	printf("\n%f deg celsius is %f farenheit ",celsius,farenheit);
}

