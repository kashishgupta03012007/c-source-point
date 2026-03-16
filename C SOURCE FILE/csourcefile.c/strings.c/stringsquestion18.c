//18.string palindrome example(using reverse).

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    gets(str);  

    strcpy(rev, str);
    strrev(rev);  // reverse the string

    if(strcmp(str, rev) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

/*
output
Enter a string: madam
The string is a palindrome.

Enter a string: hello
The string is not a palindrome.

Enter a string: racecar
The string is a palindrome.

*/