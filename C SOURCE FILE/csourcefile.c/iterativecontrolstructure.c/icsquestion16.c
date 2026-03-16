//16.Enter a number from the user and print the total from 0 to that number?

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,sum=0;
    clrscr();
    printf("enter a number:");
    scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
        sum=sum+i;
        }
    printf("The total from 0 to %d is:%d\n",n,sum);
}
/*
OUTPUT
Enter a number: 5
The total from 0 to 5 is: 15

Enter a number: 10
The total from 0 to 10 is: 55

Enter a number: 0
The total from 0 to 0 is: 0


*/