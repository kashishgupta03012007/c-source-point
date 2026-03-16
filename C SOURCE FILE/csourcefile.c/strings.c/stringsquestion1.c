//1.Enter a string from the user and convert in uppercase?

#include <stdio.h>
#include<conio.h>
#include<string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);  // basic input (avoid in real projects, but okay for learning)

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32;  // convert to uppercase
        }
    }

    printf("Uppercase: %s\n", str);
    return 0;
}

/*
output

Enter a string: hello world
Uppercase: HELLO WORLD

Enter a string: Data Science 101
Uppercase: DATA SCIENCE 101

Enter a string: OpenAI chatgpt
Uppercase: OPENAI CHATGPT

*/