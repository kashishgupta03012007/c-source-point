//8.Enter 5 values from user and print the odd number of array?

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[5],n,i;
    clrscr();
    printf("Enter 5 elements: \n",n);
	    for(i=0;i<5;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
    printf("Odd numbers in the array are: \n");
        for(i=0;i<5;i++)
        {
            if(arr[i]%2!=0)
            {
                printf("%d",arr[i]);
            }
        }
}
/*
output:-
Enter 5 elements:
10
15
23
44
9

Odd numbers in the array are:
15 23 9

*/