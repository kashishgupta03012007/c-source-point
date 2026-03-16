//3.Enter a string from the user and convert into sentence case?

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) 
    {
        // lowercase 
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;

    printf("Sentence case: %s\n", str);
    return 0;
}

/*
output

Enter a string: hello world from c
Sentence case: Hello world from c

Enter a string: programming in C language
Sentence case: Programming in c language

*/