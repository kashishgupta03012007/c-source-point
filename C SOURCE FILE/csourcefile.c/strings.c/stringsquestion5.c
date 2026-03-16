//5.Enter a string from the user and covert it into toggle case?

#include <stdio.h>
#include<conio.h>
#include<string.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  // lowercase → uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;  // uppercase → lowercase
    }

    printf("Toggle case: %s\n", str);
    return 0;
}
/*
output

Enter a string: Programming
Toggle case: pROGRAMMING

Enter a string: Data Science 101
Toggle case: dATA sCIENCE 101

Enter a string: OpenAI Chat
Toggle case: oPENai cHAT

*/