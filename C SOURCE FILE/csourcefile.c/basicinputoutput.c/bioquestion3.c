//3. Write a program to read only 4 character from the keyboard and display it on the screen in seprate line.
#include <stdio.h>
#include <conio.h>

void main()
{
    char ch1,ch2,ch3,ch4;
    clrscr();
    printf("enter four character:");
    ch1=getch();
    ch2=getch();
    ch3=getch();
    ch4=getch();
    printf("you entered:-%c\n",ch1);
    printf("you entered:-%c\n",ch2);
    printf("you entered:-%c\n",ch3); 
    printf("you entered:-%c\n",ch4);    
    getch();
}

/*
output:-
enter four character:ABCD
you entered:-A
you entered:-B
you entered:-C
you entered:-D

*/
