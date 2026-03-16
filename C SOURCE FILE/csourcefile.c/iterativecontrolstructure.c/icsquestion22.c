//22.Enter a character from user and that character should be alphabet?

#include<stdio.h>
#include<conio.h>

void main()

{
    char ch;
    clrscr();
    printf("Enter a character:");
    scanf("%c",&ch);
        if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
        {
            printf("%c is an alphabet", ch);
        }
        else
        {
            printf("%c is not an alphabet", ch);
        }
}
/*
output:-
Enter a character: A
A is an alphabet

Enter a character: m
m is an alphabet

Enter a character: 7
7 is not an alphabet

Enter a character: #
# is not an alphabet

*/