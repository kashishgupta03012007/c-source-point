
//3.Enter an array from the user and copy it into second array?

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr1[5],arr2[5],n,i;
    clrscr();
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    printf("Enter %d elements: \n",n);
    	for(i=0;i<n;i++)
	    {
	    scanf("%d",&arr1[i]);
	    }
	        for(i=0;i<n;i++)
	        {
	            arr2[i]=arr1[i];}
	            printf("array copy in second array: \n");
	                for(i=0;i<n;i++)
	                {
	                    printf("%d\n",arr2[i]);
	                }
}
/*
OUTPUT:-
Enter number of elements in array: 5
Enter 5 elements:
10
20
30
40
50

array copy in second array:
10
20
30
40
50

*/