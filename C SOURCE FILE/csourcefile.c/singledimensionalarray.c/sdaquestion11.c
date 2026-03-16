//11.Enter 5 values of array and sort in ascending order?

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[5],i,j,temp;
    clrscr();
    printf("Enter 5 elements: \n");
	    for(i=0;i<5;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
            for(i=0;i<5;i++)
                { 
                    for (j=1;j<5;j++)
                        {
                            if(arr[i]>arr[j])
                            {
                                temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                            }
                        }
                }
            printf("Array elements in ascending order: \n");
                for(i=0;i<5;i++)
                {
                    printf("%d \n",arr[i]);
                }
}
/*
output:-

*/
