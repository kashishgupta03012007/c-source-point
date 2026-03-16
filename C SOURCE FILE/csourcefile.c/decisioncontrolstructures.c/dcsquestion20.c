//20.enter the year from the user and check it is leap year or not?
#include<stdio.h>
#include<conio.h>

void main()
{

int year;
clrscr();
printf("enter the year:");
scanf("%d",&year);
    if((year%400==0)||(year%4==0&&year%100!=0)){
    printf("%d is IT IS A LEAP YEAR",year);     }
    else
    printf("%d is NOT A LEAP YEAR",year);
}
/*
OUTPUT:-
enter the year:2024
2024 is IT IS A LEAP YEAR

enter the year:2023
2023 is NOT A LEAP YEAR

enter the year:1900
1900 is NOT A LEAP YEAR

enter the year:2000
2000 is IT IS A LEAP YEAR

*/