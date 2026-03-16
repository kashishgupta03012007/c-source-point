
//19.enter a character from the user and it is in upper case,lowercase,special character or numbers?
#include<stdio.h>
#include<conio.h>

void main()
{
char ch;
clrscr();
printf("enter any character");
scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("IT IS AN UPPERCASE CHARACTER");
    else if(ch>='a'&&ch<='z')
    printf("IT IS LOWERCASE CHARACTER");
    else if(ch>='0'&&ch<='9')
    printf("IT IS NUMBERS");
    else
    printf("IT IS A SPECIAL CHARACTER");
}

/*
OUTPUT:-
enter any characterA
IT IS AN UPPERCASE CHARACTER

enter any characterm
IT IS LOWERCASE CHARACTER

enter any character7
IT IS NUMBERS

enter any character@
IT IS A SPECIAL CHARACTER

*/