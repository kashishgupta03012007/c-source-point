//1Write a program print the pattern on the screen i.e.?11111 11111 11111?

#include<stdio.h>
#include<conio.h>

void main()

{
    int i, j;
    clrscr();
        for (i = 1; i <= 3; i++)                        //3rows
        {        
            for (j = 1; j <= 5; j++)                    //5columns
            {    
                printf("1");
            }
        printf("\n");  
        }
}   

/*
OUTPUT:-
11111
11111
11111

*/