//17.Enter a number from user and find out factorial of that number?

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i;
    long long factorial=1;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);
        if(n<0)
        {
        printf("Factorial of a negative number doesn't exist.\n");
        }
        else
        { 
            for(i=1;i<=n;i++)
            {
            factorial=factorial*i;
            }
        printf("Factorial of %d is:%lld\n",n,factorial);
        }
}

/*
OUTPUT
Enter the number: 5
Factorial of 5 is: 120

Enter the number: 0
Factorial of 0 is: 1

Enter the number: -3
Factorial of a negative number doesn't exist.

*/
