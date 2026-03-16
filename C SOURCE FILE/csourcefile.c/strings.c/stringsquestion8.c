//8.Enter a string from the user and concatenate the string?

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];
    clrscr();
        printf("enter first string: ");
        gets(str1);
        printf("enter second string: ");
        gets(str2);
           
            strcat(str1,str2);
                printf("%s",str1);
}

/*
output

enter first string: Hello
enter second string: World
HelloWorld

*/