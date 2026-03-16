//15.Enter a number from user anf print first digit of number?

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,firstdigit;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&num);
        if(num<0)
        num=-num;
            while(num>=10)
            {
            num=num/10;
            }
                firstdigit=num;
                printf("the first digit is:%d\n",firstdigit);
}

/*
OUTPUT:-
Enter the number: 12345
The first digit is: 1

Enter the number: -9876
The first digit is: 9

Enter the number: 5
The first digit is: 5

*/