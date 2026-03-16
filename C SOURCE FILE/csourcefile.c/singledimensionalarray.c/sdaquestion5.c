
//5.Enter an array from the user and the number which is even?

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
    printf("Even numbers in the array are: \n");
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                printf("%d",arr[i]);
            }
        }
}
/*
output:-
Enter number of elements in array: 5
Enter 5 elements:
10
23
44
55
60

Even numbers in the array are:
10 44 60


*/