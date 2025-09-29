#include<stdio.h>
void main()
{
	int num,i,a;
	printf("Enter the number:");
	scanf("%d",&num);
	for (i=1;i<=20;i++)
	{
		a=num*i;
		printf("%d\n",a);
	}
}
