#include <stdio.h>
int main(){
    int a, b, res;
    printf("Enter the values of a and b");
    scanf("%d%d",&a,&b);

    // Addition
    res = a + b; 
    printf("a + b is %d\n", res);
  
    // Subtraction
    res = a - b; 
    printf("a - b is %d\n", res);

    // Multiplication
    res = a * b; 
    printf("a * b is %d\n", res);

    // Division
    res = a / b; 
    printf("a / b is %d\n", res);

    // Modulus
    res = a % b; 
    printf("a %% b is %d\n", res);
    return 0;
}
