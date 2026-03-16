
//7.Enter a number from the user and print the series that number?

#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i;
    clrscr();
    printf("enter a number:");
    scanf("%d",&num);
        for(i=0;i<=num;i++)
        {
        printf("%d\n",i);
        }
}

/*
output:-
enter a number:5
0
1
2
3
4
5

enter a number:10
0
1
2
3
4
5
6
7
8
9
10


*/