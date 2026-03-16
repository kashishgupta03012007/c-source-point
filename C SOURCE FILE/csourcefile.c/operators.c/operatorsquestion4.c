//4.Write a program to show that example of post-decrement ?

#include<stdio.h>
#include<conio.h>

void main()

{

    int x=5;
    int y=x--;
    clrscr();
    printf("THE VALUE OF X: %d\n",x);
    printf("THE VALUE OF Y: %d\n",y);
}

/*
output
THE VALUE OF X: 4
THE VALUE OF Y: 5

*/