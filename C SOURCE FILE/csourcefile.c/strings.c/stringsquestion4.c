//4.Enter a sring from  the user and convert it into titlecase?

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
     {
        if (i == 0) {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }

        else if (str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
        else {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
        }
    }

    printf("Title case: %s\n", str);
    return 0;
}

/*
output

Enter a string: hello world from c
Title case: Hello World From C

Enter a string: OPENai chatgpt
Title case: Openai Chatgpt

Enter a string: programming in c language
Title case: Programming In C Language

*/