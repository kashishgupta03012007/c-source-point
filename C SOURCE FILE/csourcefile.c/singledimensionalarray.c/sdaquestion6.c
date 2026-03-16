//6.Enter an array from the user and print only posotive number?

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[5],n,i;
    clrscr();
    printf("Enter number of elements in array: ");
    scanf("%d",&n);

        printf("Enter %d elements: \n",n);
	        for(i=0;i<n;i++)
	        {
	            scanf("%d",&arr[i]);
	        }
        printf("Positve numbers in array are: ");
            for(i=0;i<n;i++)
            {
                if(arr[i]>0)
                {
                    printf("%d is postive array\n",arr[i]);
                }
            }
}
/*
output:-
Enter number of elements in array: 5
Enter 5 elements:
10
-4
0
25
-9

Positive numbers in array are:
10 is positive array
25 is positive array

*/