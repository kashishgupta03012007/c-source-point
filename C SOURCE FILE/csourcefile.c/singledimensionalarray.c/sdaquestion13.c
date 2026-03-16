//13.Find the minimum value of an array?

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[5],n,i,mini;
    clrscr();
    printf("Enter number of elements in array: ");
    scanf("%d",&n);

        printf("Enter %d elements: \n",n);
	        for(i=0;i<n;i++)
	        {
	            scanf("%d",&arr[i]);
	        }

	            mini=arr[0];
	                for(i=0;i<n;i++)
	                {
	                    if(arr[i]<mini)
	                    {
	                        mini=arr[i];
	                    }
	                }
    printf("Minimum value of an array is :%d \n",mini);
}
/*
output
Enter number of elements in array: 5
Enter 5 elements:
45
12
78
9
23

Minimum value of an array is: 9

*/