//10.enter two number from the user and check which is the greater number and print the greater number?
#include<stdio.h>
#include<conio.h>

void main()
{
int num1,num2;
clrscr();
printf("enter the first number: ");
scanf("%d",&num1);
printf("enter the second number:");
scanf("%d",&num2);
    if(num1>num2)
    printf("the greater number is:%d",num1);
    else if(num2>num1)
    printf("the greater number is:%d",num2);
    else
    printf("both are equal");
}

/*
output:-
enter the first number: 8
enter the second number: 3
the greater number is:8

enter the first number: 5
enter the second number: 9
the greater number is:9

enter the first number: 4
enter the second number: 4
both are equal
*/