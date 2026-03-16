//6.Write a program to enter a number from the user, the length of the number is depend on the user,programmer should print the 
//last digit of the number?

#include<stdio.h>
#include<conio.h>

void main()

{

    int num;
    clrscr();
    printf("enter a number:");
    scanf("%d",&num);
    printf("Last Digit : %d\n",num%10);
}

/*
output
Enter a number: 12345
Last Digit: 5

Enter a number: 7
Last Digit: 7

Enter a number: 890
Last Digit: 0

*/