#include <stdio.h>

int main()
{
    int a=12,b,sum,mul,divi,mod,sub;
    printf("*********ARTHIMETIC OPERATIONS*********");
    printf("\nEnter the value of a :");
    scanf("%d",&a);
    printf("%d\n",a);
    printf("\nEnter the value of b :");
    scanf("%d",&b);
    printf("%d",b);
    sum = a+b;
    printf("\n*********Addition*********");
    printf("\n\nAddition of %d and %d is : %d",a,b,sum);
    printf("\n\n\n*********Subtraction*********");
    sub = a-b;
    printf("\n\nSubtraction of %d and %d is : %d",a,b,sub);
    printf("\n\n\n*********Multiplicationtion*********");
    mul = a*b;
    printf("\n\nMultiplication of %d and %d is : %d",a,b,mul);
    printf("\n\n\n*********Division*********");
    divi = a/b;
    printf("\n\nDivision of %d and %d is : %d",a,b,divi);
    printf("\n\n\n*********Modulus*********");
    mod = a%b;
    printf("\n\nModulus of %d and %d is : %d",a,b,mod);
    return 0;
}

