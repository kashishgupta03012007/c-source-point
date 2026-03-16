//10.enter a lower case character from the user and print it into uppercase?

#include<stdio.h>
#include<conio.h>

void main()

{
    char ch;
    clrscr();
    printf("Enter a lower case character:");
    scanf("%c",&ch);
        if(ch>='a'&&ch<='z')
        {
            printf("Upper case character: %c\n",ch-32);
        }
        else
            printf("Invalid input.Please enter a lowercase character.\n");
}

/*
output
Enter a lowercase character: a
Uppercase character: A

Enter a lowercase character: m
Uppercase character: M

Enter a lowercase character: G
Invalid input. Please enter a lowercase character.

*/