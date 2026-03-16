//14.enter a number from the user if user enter 30 then print the months in which we have 30days.if they enter 31 the print the month31 for 28 29 print the month 
//else everything is invalid?
#include<stdio.h>
#include<conio.h>

void main()
{
    int days;
    clrscr();
    printf("ENTER NUMBER OF DAYS IN A MONTH:");
    scanf("%d",&days);
        
        switch(days)
        {
            case 28:
            printf("FEBURARY");
            break;
            case 29:
            printf("FEBURARY");
            break;
            case 30:
            printf("APRIL,JUNE,SEPTEMBER,NOVEMBER");
            break;
            case 31:
            printf("JANURARY,MARCH,MAY,JULY,AUGUST,OCTOBER,DECEMBER");
            break;
            case 32:
            printf("INVALID");
            break;
        }
}

/*
OUTPUT:-
ENTER NUMBER OF DAYS IN A MONTH: 28
FEBURARY

ENTER NUMBER OF DAYS IN A MONTH: 29
FEBURARY

ENTER NUMBER OF DAYS IN A MONTH: 30
APRIL,JUNE,SEPTEMBER,NOVEMBER

ENTER NUMBER OF DAYS IN A MONTH: 31
JANURARY,MARCH,MAY,JULY,AUGUST,OCTOBER,DECEMBER

ENTER NUMBER OF DAYS IN A MONTH: 32
INVALID

*/