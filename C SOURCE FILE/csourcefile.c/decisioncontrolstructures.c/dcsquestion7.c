//7.enter a character from user and check that it is an alphabet?
#include<stdio.h>
#include<conio.h>

void main()

{
char ch;
clrscr();
printf("Enter a character :-");
scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    printf("IT IS AN ALPHABET");
    else
    printf("NOT AN ALPHABET");
}
/*
OUTPUT:-
Enter a character :- A
IT IS AN ALPHABET

Enter a character :- g
IT IS AN ALPHABET

Enter a character :- 7
NOT AN ALPHABET

Enter a character :- @
NOT AN ALPHABET

*/

