#include<stdio.h>
void main()
{
	int a;
	printf("Enter the value of a:");
	scanf("%d",&a);
	
	if(a>=100){
		printf("%d is the greatest number",a);
	}
	else if(a<=98){
		printf("%d is the smallest number",a);
	}
	else
		printf("%d is doesnt exists",a);

}
