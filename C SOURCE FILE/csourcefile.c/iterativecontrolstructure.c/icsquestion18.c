//18.Enter two numbers from user and print range from first number to second number?

#include<stdio.h>
#include<conio.h>

void main()

{
    int num1,num2,i;
    clrscr();
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    printf("Numbers from%d to %d are\n",num1,num2);
        for(i=num1;i<=num2;i++)
        {
            printf("%d",i);
        }
    printf("\n");
}

/*
OUTPUT
Enter first number: 3
Enter second number: 7
Numbers from 3 to 7 are
3 4 5 6 7

Enter first number: 10
Enter second number: 15
Numbers from 10 to 15 are
10 11 12 13 14 15


*/