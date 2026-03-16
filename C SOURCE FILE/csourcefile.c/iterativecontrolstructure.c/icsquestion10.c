
//10.Write a program to print the table of 4 in the format given as below(till 20) 1*1=4 and so on

#include<stdio.h>
#include<conio.h>

void main()
{
    int n=4;
    clrscr();
        for(int i=1;i<=20;i++)
        {
        printf("%d x %d = %d\n",n,i,n*i);
        }
}
/*
Output:

4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
4 x 4 = 16
4 x 5 = 20
4 x 6 = 24
4 x 7 = 28
4 x 8 = 32
4 x 9 = 36
4 x 10 = 40
4 x 11 = 44
4 x 12 = 48
4 x 13 = 52
4 x 14 = 56
4 x 15 = 60
4 x 16 = 64
4 x 17 = 68
4 x 18 = 72
4 x 19 = 76
4 x 20 = 80

*/