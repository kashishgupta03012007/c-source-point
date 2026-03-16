
//8.Enter a number from the user if the number is negative square the number if it is positive increment the number 20 time?
#include<stdio.h>
#include<conio.h>

void main()
{
int num,squr;
clrscr();
printf("Enter the number:-");
scanf("%d",&num);
    if(num<0)
    {
    squr=num*num;
    printf("%d",squr);}
    else if(num>0)
    {
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    num++;
    printf(" %d",num);   }
    else
    {
    printf(" invalid ");
    }
}


/*
output:-
Enter the number:- -5
25

Enter the number:- 3
23

Enter the number:- 0
invalid 

Enter the number:- -9
81

Enter the number:- 10
30
*/


