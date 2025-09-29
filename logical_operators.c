#include<stdio.h>
void main()
{
        int a,b;
        printf("Enter the values of a and b");
        scanf("%d%d\n",&a,&b);

        printf("%d",a>b&&b<a);
        printf("%d",a>b||b>a);
        printf("%d",b!=b);
       
}


