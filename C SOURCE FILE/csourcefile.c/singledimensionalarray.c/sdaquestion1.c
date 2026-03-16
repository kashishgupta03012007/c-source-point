//1.Enter an array from the user and display all the value?

#include<stdio.h>
#include<conio.h>

void main()

{

    int arr[5],i;
    clrscr();
    for(i=0;i<=4;i++)
    {
        printf("enter an array: ");
        scanf("%d",&arr[i]);}
        for(i=0;i<=4;i++)
        {
            printf("%d\n",arr[i]);
	    }
}
/*
OUTPUT:-
enter an array: 10
enter an array: 20
enter an array: 30
enter an array: 40
enter an array: 50

10
20
30
40
50

*/