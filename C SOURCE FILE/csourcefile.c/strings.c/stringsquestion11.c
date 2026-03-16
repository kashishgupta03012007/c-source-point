//11.Enter a string from the user and print the each character in new line?

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[50];
    int i;
    clrscr();
        printf("enter a string: ");
        fgets(str,sizeof(str),stdin);

	        if(str[strlen(str)-1]=='\n')
	        {
	            str[strlen(str)-1]='\0';
	        }
        printf("\n Character in the string: \n");
            for(i=0;i<strlen(str);i++)
            {
                printf("%c\n",str[i]);
            }
}

/*
output

Enter a string: Hello World

Characters in the string:
H
e
l
l
o

W
o
r
l
d

*/