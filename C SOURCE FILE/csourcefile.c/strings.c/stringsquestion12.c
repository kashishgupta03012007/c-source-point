//12.Enter the string from the user and copy reverse order into another string?

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str1[50], str2[50];
    int i, len;
    clrscr();
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
        len = strlen(str1);
            if(str1[len - 1] == '\n')
            {
                str1[len - 1] = '\0';
                len--; 
            }
                for(i = 0; i < len; i++)
                {
                    str2[i] = str1[len - 1 - i];
                }
                    str2[len] = '\0';
                        printf("Reversed string: %s\n", str2);
}

/*
output

Enter a string: Hello World
Reversed string: dlroW olleH

*/
