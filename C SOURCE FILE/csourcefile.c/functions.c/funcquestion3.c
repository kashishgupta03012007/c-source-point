
//3.write a program to return an array from the fuction?

#include<stdio.h>
#include<conio.h>

int*getarray()
{
    static int arr[5];
    int i;
    printf("enter 5 numbers:\n");
        
        for(i=0;i<5;i++)
        { 
            scanf("%d",&arr[i] );
        }

    return arr;
}
        void main()
        {
            int *ptr;
            int i;
            clrscr();
            ptr=getarray();
            printf("The array element are:");
                for(i=0;i<5;i++)
                    {
                        printf("%d ", ptr[i]);
                    }

        }

/*
output:-
enter 5 numbers:
5 10 15 20 25

The array element are: 5 10 15 20 25 

*/