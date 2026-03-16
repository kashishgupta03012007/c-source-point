//11.enter a number from the user and check it is divisible by 4or not?
#include<stdio.h>
#include<conio.h>

void main()

{
int num;
clrscr();
printf("Enter the number:");
scanf("%d",&num);
    if(num%4==0)
    {
    printf("The number %d is divisible by 4.",num);
    }
    else
    printf("Not divisible by 4");
}

/*
output:-
Enter the number:8
The number 8 is divisible by 4.

Enter the number:12
The number 12 is divisible by 4.

Enter the number:10
Not divisible by 4

Enter the number:7
Not divisible by 4
*/