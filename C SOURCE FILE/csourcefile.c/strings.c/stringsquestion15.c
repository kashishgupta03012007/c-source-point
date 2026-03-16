//15.Enter the string from the user and enter a character if it is exist then print the bound number?

#include<stdio.h>
#include<conio.h>

void main()
{
    char str[50],ch;
    int i,found=0;
    clrscr();
        printf("Enter a string: ");
        scanf("%c",&ch);
        printf("Enter a character to search: ");
        scanf("%c",&ch);
            for(i=0;str[i]!='\0';i++)
            {
                if(str[i]==ch)
                {
                    printf("Character '%c' found at position %d\n",ch,i);
                    found=1;
                    break;
                }
            }
                if(!found)
                {
                    printf("Character '%c' not found in the string .\n",ch);
                }
}
/*
output
Enter a string: OpenAI
Enter a character to search: A
Character 'A' found at position 4

Enter a string: Hello
Enter a character to search: z
Character 'z' not found in the string.


*/