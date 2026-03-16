
//10.Enter 5 value of array from the user,enter a value from user and seacrh this value in array if the value is found the print
//"found"or not then print "not found"?

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[5],i,value,found=0;
    clrscr();
    printf("Enter 5 elements: \n");
	    for(i=0;i<5;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
    printf("Enter value to search: ");
    scanf("%d",&value);
        for(i=0;i<5;i++)
        {
            if(arr[i]==value)
            {
                found=1;
                break;
            }
        }
    if(found==1)
    {
        printf("Found\n");
    }
    else
    printf("not found\n");
    }
/*
output
Enter 5 elements:
10
20
30
40
50
Enter value to search: 30

Found


Enter 5 elements:
10
20
30
40
50
Enter value to search: 100

Not found

*/