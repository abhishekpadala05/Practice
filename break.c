#include<stdio.h>
void main()
{
	int n;
	for (n=1;n<=5;n++)
	{
		if(n==5)
			break;
		printf("Number=%d\n",n);
	}
	printf("Out of for loop\n");
}
