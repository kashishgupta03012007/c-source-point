//2.Enter a number from the user and check it is odd or even?

#include<stdio.h>
#include<conio.h>

void main()

{
int n;
clrscr();
printf("enter a number");
scanf("%d",&n);
    if(n%2)
    printf("the number  is odd ");
    else
    printf("the number is even");
}


/*
OUTPUT:-
Enter a number: 7
The number is odd

Enter a number: 4
The number is even

*/