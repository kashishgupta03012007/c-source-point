//1.Write a program to enter the number from the user and check it is positive or negative or(zero)?
#include<stdio.h>
#include<conio.h>

void main()
{
        
    int n;
    clrscr();
    printf("enter the number:- ");
    scanf("%d",&n);
        if(n>0)
        printf("THE NUMBER IS POSITIVE");
        else if(n<0)
        printf("THE NUMBER IS NEGRATIVE NUMBER");
        else
        printf("zero");
}
/*
OUTPUT:- 
Enter the number: 8
The number is positive

Enter the number: -5
The number is negative

Enter the number: 0
Zero


*/