//4.Enter an array from the user and copy the array into another array in reverse ordere?

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr1[5],arr2[5],n,i,j;
    clrscr();
    printf("Enter number of elements in array: ");
    scanf("%d",&n);

        printf("Enter %d elements: \n",n);
	        for(i=0;i<n;i++)
	        {
	            scanf("%d",&arr1[i]);
	        }
	            
                for(i=0,j=n-1;i<n;i++, j--)
	            {
	                arr2[i]=arr1[j];
	            }
	    printf("array copy in second array: \n");
	        for(i=0;i<n;i++)
	        {
	            printf("%d\n",arr2[i]);
	        }
}
/*
output:-
Enter number of elements in array: 5
Enter 5 elements:
10
20
30
40
50

array copy in second array:
50
40
30
20
10

*/