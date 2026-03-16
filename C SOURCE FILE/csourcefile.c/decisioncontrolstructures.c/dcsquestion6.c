/*6.enter a number from the user if it is positive than convert into negative if it is negative convert into positive often that  print the number?*/
#include<stdio.h>
#include<conio.h>

void main()

{
int num;
clrscr();
printf("enter the number :- ");
scanf("%d",&num);
num= -num;
printf("The converted number is:%d",num);
}

/*
OUTPUT:-
enter the number :- 5
The converted number is:-5

enter the number :- -8
The converted number is:8

enter the number :- 0
The converted number is:0
*/
