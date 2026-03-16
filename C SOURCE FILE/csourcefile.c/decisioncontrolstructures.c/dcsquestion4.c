/*4.Enter a number from the user if the number is between 0and40 then we will
print fail if the number is between 40and60 then we will print C grade, if the number
is between 60and80 than we will print B grade, if the number is btw 80and100
we will print A grade and rest all number are invalid?*/
#include<stdio.h>
#include<conio.h>

void main()

{
int num;
clrscr();
printf("Enter the number:- ");
scanf("%d",&num);
    if(num<=100&&num>=80)
    printf("The grade is A");
    else if(num<=80&&num>=60)
    printf("The grade is B");
    else if(num<=60&&num>=40)
    printf("The grade is C");
    else if(num<=40&&num>=0)
    printf("FAIL");
    else
    printf("THE NUMBER IS INVALID");
}

/*
OUTPUT:-
Enter the number:- 85
The grade is A

Enter the number:- 72
The grade is B

Enter the number:- 55
The grade is C

Enter the number:- 32
FAIL

Enter the number:- 120
THE NUMBER IS INVALID

*/
