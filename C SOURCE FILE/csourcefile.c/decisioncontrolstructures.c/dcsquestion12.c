
//12.enter a four character from users and check they are equal or not?

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch1, ch2, ch3, ch4;
    clrscr();
    printf("Enter the first character: ");
    scanf(" %c", &ch1);
    printf("Enter the second character: ");
    scanf(" %c", &ch2);
    printf("Enter the third character: ");
    scanf(" %c", &ch3);
    printf("Enter the fourth character: ");
    scanf(" %c", &ch4);

    if (ch1 == ch2 && ch2 == ch3 && ch3 == ch4)
        printf("All are equal");
    else
        printf("Not equal");
}
/*
output:-
Enter the first character: a
Enter the second character: a
Enter the third character: a
Enter the fourth character: a
All are equal

*/
