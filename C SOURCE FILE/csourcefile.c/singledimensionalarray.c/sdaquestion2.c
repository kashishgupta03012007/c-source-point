//2.enter the array  from the user and print the arraay in the reverse order.

#include<stdio.h>
#include<conio.h>

void main()

{

    int arr[5],i;
    clrscr();
        for(i=0;i<=4;i++)
	    {
	    printf("enter the number:");
	    scanf("%d",&arr[i]);
	    }
		    for(i=4;i>=0;i--)
		    {
		        printf("%d\n",arr[i]);
		    }
}
/*
OUTPUT:-
enter the number: 10
enter the number: 20
enter the number: 30
enter the number: 40
enter the number: 50

50
40
30
20
10

*/