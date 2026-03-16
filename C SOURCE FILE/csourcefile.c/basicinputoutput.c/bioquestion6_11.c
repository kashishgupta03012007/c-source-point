//6.11.Write a program for printing your name on output screen but your name should blink five times.
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()

{

    int i;
    clrscr();
        for(i=0;i<5;i++)
        {
        printf("KASHISH GUPTA");
        delay(500);
        clrscr();
        delay(500);
        }
}

//output:-
