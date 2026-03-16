//6.Enter a string from the user and final length of the string?

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[50];
    int length;
    clrscr();
        printf("enter a string: ");
        fgets(str,sizeof(str),stdin);

	        if(str[strlen(str)-1]=='\n')
	        {
	            str[strlen(str)-1]='\0';
	        }
	            length=strlen(str);
                printf("Length of the string is: %d\n",length);
}
/*
output

enter a string: health
Length of the string is: 6

enter a string: Hello World
Length of the string is: 11


*/