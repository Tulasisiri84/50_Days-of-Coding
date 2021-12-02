/*
Program: Write a C Program to check if a person is eligible to vote or not
Date   : 2.11.2021
Logic  : if-else statement
*/
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age>=18)
    {
      printf("You are eligible to vote");
    }
    else
    {
      printf("Your age is %d",age);
      printf("\nYou are lessthan 18");
    }
    return 0;
}
