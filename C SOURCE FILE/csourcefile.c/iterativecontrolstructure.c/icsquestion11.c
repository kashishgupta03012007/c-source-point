
//11.Enter the number from the user and reverse the number?
#include<stdio.h>
#include<conio.h>

void main()
{
    int num,reversed=0,remainder;
    clrscr();
    printf("Enter a number:");
    scanf("%d",&num);
        while(num!=0)
        {
        remainder=num%10;
        reversed=reversed*10+remainder;
        num/=10;
        }
    printf("Reversed number:%d\n",reversed);
}

/*
output:-
Enter a number:12345
Reversed number:54321

*/