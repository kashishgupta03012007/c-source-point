//9.enter the number from the user if the number is negative or positive and find out of that number?

#include<stdio.h>
#include<conio.h>

void main()
{
int num;
clrscr();
printf("Enter the number:-");
scanf("%d",&num);
    if(num>0)
    printf("THE NUMBER IS POSITIVE");
    else if(num<0)
    printf("THE NUMBER IS NEGRATIVE NUMBER");
    else
    printf("The number is zero");
}
/*
output:-
Enter the number:- 8
THE NUMBER IS POSITIVE

Enter the number:- -5
THE NUMBER IS NEGRATIVE NUMBER

Enter the number:- 0
The number is zero

*/
