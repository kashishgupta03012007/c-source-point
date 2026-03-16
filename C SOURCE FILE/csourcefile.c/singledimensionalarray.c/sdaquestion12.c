//12.Find maximum values of array?

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[5],n,i,max;
    clrscr();
    printf("Enter number of elements in array: ");
    scanf("%d",&n);

        printf("Enter %d elements: \n",n);
	        for(i=0;i<n;i++)
	        {
	            scanf("%d",&arr[i]);
	        }

	            max=arr[0];
	            for(i=0;i<n;i++)
	            {
	                if(arr[i]>max)
	                {
	                    max=arr[i];
	                }
	            }
    printf("Maximum value of an array is :%d \n",max);
}
/*
output:-
Enter number of elements in array: 5
Enter 5 elements:
12
45
7
89
23

Maximum value of an array is: 89

*/