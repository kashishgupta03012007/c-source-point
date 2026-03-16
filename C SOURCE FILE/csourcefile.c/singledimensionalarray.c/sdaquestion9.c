//9.Enter 5 values of array from the user and add them?

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[5], i, sum = 0;
    clrscr();

    printf("Enter 5 elements:\n");
        for(i = 0; i < 5; i++)
        {
            scanf("%d", &arr[i]);
        }
            for(i = 0; i < 5; i++)
            {
                sum = sum + arr[i]; 
            }
    printf("Sum of array elements = %d", sum);
}

/*
output:-
Enter 5 elements:
1
2
3
4
5

Sum of array elements = 15

*/