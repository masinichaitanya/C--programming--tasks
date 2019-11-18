#include<stdio.h>
#include<stdlib.h>
void main()
{
	int celsius,fahrenheit,ans,ch;
	printf("OPTIONS");
	printf("\n\t(1)CELSIUS TO FAHRENHEIT");
	printf("\n\t(2)FAHRENHEIT TO CELSIUS");
	printf("\n\t(3)EXIT");
	printf("\n\nEnter your choice:");
	scanf("%d",&ch);
	if(ch<=3&ch>0)
	switch(ch)
	{
		case(1):
		printf("\nEnter temperature in celsius:");
		scanf("%d",&celsius);
		fahrenheit=(9*celsius/5)+32;
		printf("\nThe temperature in fahrenheit is:%d",fahrenheit);
		break;
		case(2):
		printf("\nEnter temperature in fahrenheit:");
		scanf("%d",&fahrenheit);
		celsius=5*(fahrenheit-32)/9;
		printf("\nThe temperature in celsius is:%d",celsius);
		break;
		case(3):
		printf("\nChoice terminated");
		exit(0);
		break;
	}
}
	
		
	

	
	
	
	
	
	
	
	

