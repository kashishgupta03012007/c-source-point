//3.Enter a number from the user and check that it is of 1digit,2digit,3digit
//or4digit or 5digit?

#include<stdio.h>
#include<conio.h>

void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) num = -num; 
    if (num <= 9)
        printf("It is 1 DIGIT NUMBER");
            else if (num <= 99)
                printf("It is 2 DIGIT NUMBER");
            else if (num <= 999)
                printf("It is 3 DIGIT NUMBER");
            else if (num <= 9999)
                printf("It is 4 DIGIT NUMBER");
            else if (num <= 99999)
                printf("It is 5 DIGIT NUMBER");
            else
                printf("It is more than 5 DIGIT NUMBER");
}


/*
OUTPUT:-
Enter a number: -432
It is 3 DIGIT NUMBER

Enter a number: 56
It is 2 DIGIT NUMBER

*/
