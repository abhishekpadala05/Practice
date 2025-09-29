#include<stdio.h>
void main()
{
	long num;
	int dig,sum;
	printf("enter a number:");
	scanf("%ld",&num);
	printf("%ld ->",num);
	do
	{
		sum=0;
		while(num!=0){
			dig=num%10;
			sum+=dig;
			num/=10;
		}
		printf("%d\t",sum);
		num=sum;
	}
	while (num/10!=0);
}
