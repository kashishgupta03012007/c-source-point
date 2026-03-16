
//21.Write a program to find out the fibonacci series/1to100(like 0112358 13...)?
#include<stdio.h>
#include<conio.h>

void main()
{
    int a=0,b=1,next;
    clrscr();
    printf("Fibonacci series up to 100:\n");
        while(a<=100)
        {
            printf("%d",a);
            next=a+b;
            a=b;
            b=next;
        }
}
/*
output:-
011235813582134553

*/