
//13.Enter three numbers from the users and tell which is greater?
#include<stdio.h>
#include<conio.h>

void main()
{
int num1,num2,num3;
clrscr();
printf("Enter the first number: ");
scanf("%d",&num1);
printf("Enter the second number: ");
scanf("%d",&num2);
printf("Enter the thrid number: ");
scanf("%d",&num3);
    if(num1>num2&&num1>num3)
    printf(" %d",num1);
    else if(num2>num1&&num2>num3)
    printf(" %d",num2);
    if(num3>num2&&num3>num1)
    printf(" %d",num3);
}
/*
OUTPUT:-
Enter the first number: 5
Enter the second number: 8
Enter the thrid number: 2
 8

Enter the first number: 10
Enter the second number: 3
Enter the thrid number: 7
 10
Enter the first number: 4
Enter the second number: 9
Enter the thrid number: 12
 12

 */

