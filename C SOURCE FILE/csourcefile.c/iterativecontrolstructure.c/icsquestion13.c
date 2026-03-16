
//13.Enter a number from the user and check it is palidrome or not?
#include<stdio.h>
#include<conio.h>

void main()
{

    int num,reversed=0,remainder,original;
    clrscr();
    printf("Enter a number:");
    scanf("%d",&num);
    original=num;
        while(num!=0)
        {
        remainder=num%10;
        reversed=reversed*10+remainder;
        num=num/10;
        }
            if(original==reversed)
            printf("%d is a palindrome number.\n",original);
            else
            printf("%d is not a palidrome number.\n",original);
}

/*
OUTPUT:-
Enter a number: 121
121 is a palindrome number.

Enter a number: 123
123 is not a palindrome number.

Enter a number: 7
7 is a palindrome number.


*/