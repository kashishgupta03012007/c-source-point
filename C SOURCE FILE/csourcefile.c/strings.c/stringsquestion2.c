//2.Enter a string from the user and convert in lowercase?
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
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + 32;  // convert to lowercase
        }
    }

    printf("Lowercase: %s\n", str);
    return 0;
}
/*
output

Enter a string: HELLO WORLD
Lowercase: hello world

Enter a string: DATA Science 101
Lowercase: data science 101

Enter a string: Programming123
Lowercase: programming123

*/