//7.Enter an array from the user and square all values of array?

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
	            for(i=0;i<n;i++)
	            {
	                arr[i]=arr[i]*arr[i];
	            }
    printf("array elements after squareing are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
/*
output:
Enter number of elements in array: 5
Enter 5 elements:
2
3
4
5
6

Array elements after squaring are:
4
9
16
25
36

*/
