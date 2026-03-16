
//18.Enter two digit number from user and print it in word(like 50 will be five zero)?
#include<stdio.h>
#include<conio.h>

void main()

{
int num,first,second;
clrscr();
printf("Enter two digit number:");
scanf("%d",&num);
if(num < 10 || num > 99)
    {
        printf("Please enter a valid two-digit number");
    }
    else
    {
        first = num / 10;
        second = num % 10;

        switch(first)
        {
            case 0:
            printf("zero "); 
            break;
            case 1: 
            printf("one ");
            break;
            case 2:
            printf("two "); 
            break;
            case 3: 
            printf("three "); 
            break;
            case 4: 
            printf("four "); 
            break;
            case 5: 
            printf("five "); 
            break;
            case 6: 
            printf("six "); 
            break;
            case 7: 
            printf("seven "); 
            break;
            case 8: 
            printf("eight "); 
            break;
            case 9: 
            printf("nine "); 
            break;
        }

        switch(second)
        {
            case 0: 
            printf("zero"); 
            break;
            case 1: 
            printf("one"); 
            break;
            case 2: 
            printf("two"); 
            break;
            case 3: 
            printf("three"); 
            break;
            case 4: 
            printf("four"); 
            break;
            case 5: 
            printf("five"); 
            break;
            case 6: 
            printf("six"); 
            break;
            case 7: 
            printf("seven"); 
            break;
            case 8: 
            printf("eight"); 
            break;
            case 9: 
            printf("nine"); 
            break;
        }
    }

    getch();
}
    
/*
OUTPUT:-
Enter two digit number: 50
five zero

Enter two digit number: 23
two three

Enter two digit number: 7
Please enter a valid two-digit number

*/