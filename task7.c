#include<stdio.h>
void main()
{
	char str[10];
	int l,i,flag=0;
	printf("Enter the string:");
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]!=str[l-i-1])
		{
			flag=1;
		}
	}
	if(flag==0)
	printf("\nThe string is a palindrome");
	else
	printf("The string is not a palindrome");
}
