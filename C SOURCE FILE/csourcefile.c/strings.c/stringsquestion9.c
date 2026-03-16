//9.Enter a string from the user and copy that string into another string?

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str1[50], str2[50];
    clrscr();
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

        if(str1[strlen(str1)-1] == '\n')
            str1[strlen(str1)-1] = '\0';

                strcpy(str2, str1);
                    printf("\nOriginal string: %s\n", str1);
                    printf("Copied string: %s\n", str2);
}

/*
output
Enter first string: zindagi

Original string: zindagi
Copied string: zindagi

*/