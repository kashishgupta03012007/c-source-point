//5.enter a number from the user and check if it is decimal number or not?
#include<stdio.h>
#include<conio.h>

void main()

{
float num;
clrscr();
printf("Enter the number :- ");
scanf("%f",&num);
    if(num==(int)num)
    printf("The number is not a decimal number (it is integer)\n" );
    else
    printf("The number is a decimal number\n");
}

/*
OUTPUT:-
Enter the number :- 10
The number is not a decimal number (it is integer)

Enter the number :- 10.5
The number is a decimal number

Enter the number :- -3
The number is not a decimal number (it is integer)

Enter the number :- -3.75
The number is a decimal number

*/
