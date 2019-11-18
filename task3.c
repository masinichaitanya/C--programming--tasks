#include<stdio.h>
void main()
{
	int a,b,c,sum;
	float avg;
	printf("Marks of a student in 3 different subjects:");
	printf("\n\tScience:");
	scanf("%d",&a);
	printf("\n\tMaths:");
	scanf("%d",&b);
	printf("\n\tSocial:");
	scanf("%d",&c);
	sum=a+b+c;
	avg=sum/3;
	printf("\nTotal marks of the student:%d",sum);
	printf("\n\nAverage marks of the student:%f",avg);
}

