//16.enter two character from user and check both are same or not same then find out difference between them?
#include <stdio.h>
#include <conio.h>

void main()
{
    char ch1, ch2;
    int diff;
    clrscr();

    printf("Enter first character: ");
    scanf("%c", &ch1);
    printf("Enter second character: ");
    scanf(" %c", &ch2); 

    if (ch1 == ch2) {
        printf("Both characters are the same\n");
    } else {
        diff = ch1 - ch2;
        printf("Characters are not the same\n");
        printf("Difference between them = %d\n", diff);
    }
}

/*
OUTPUT:-
Enter first character: A
Enter second character: A
Both characters are the same

Enter first character: A
Enter second character: C
Characters are not the same
Difference between them = -2

Enter first character: d
Enter second character: a
Characters are not the same
Difference between them = 3

*/