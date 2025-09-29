#include<stdio.h>
void main()
{
	int n,count=0,rem;
	printf("Enter a number :");
	scanf("%d",&n);
	do
	{
		n=n/10;
		count++;
	}while (n>10);
	printf("Number of digits=%d\n",count);
}
