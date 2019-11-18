#include<stdio.h>
#include<math.h>
void main()
{
	int n,n1,ams=0,rem;
	printf("Enter a number\n");
	scanf("%d",&n);
	n1=n;
	while(n1!=0)
	{
		rem=n1%10;
		ams=ams+pow(rem,3);
		n1=n1/10;
	}
	if(n==ams)
	printf("%d is an amstrong number\n",n);
	else
	printf("%d is not an amstrong number\n",n);
}
