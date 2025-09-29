#include<stdio.h>
void main()
{
	int i,product=1,rem;
	printf("Enter the number:");
	scanf("%d",&i);

	while(i>0){
		rem=i%10;
		product*=rem;
		i=i/10;
	}
	printf("product of digits =%d\n",product);
}

