//15.Enter a 1digit number from the user and print in word?
#include<stdio.h>
#include<conio.h>

void main()

{
int num;
clrscr();
printf("Enter the number:");
scanf("%d",&num);
    switch(num)
    {
    case 1:
    printf("ONE");
    break;
    case 2:
    printf("TWO");
    break;
    case 3:
    printf("THREE");
    break;
    case 4:
    printf("FOUR");
    break;
    case 5:
    printf("FIVE");
    break;
    case 6:
    printf("SIX");
    break;
    case 7:
    printf("SEVEN");
    break;
    case 8:
    printf("EIGHT");
    break;
    case 9:
    printf("NINE");
    default:
    printf("invalid input.please enter number 1digit number");
    }
}

/*
OUTPUT:-
Enter the number: 1
ONE

Enter the number: 5
FIVE

Enter the number: 9
NINEinvalid input.please enter number 1digit number

*/