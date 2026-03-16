//16.Enter string from user and count all vowels?

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,count=0;
    clrscr();
        printf("Enter a string: ");
        fgets(str,sizeof(str),stdin);

            str[strcspn(str,"\n")]=0;
    
                for(i=0;str[i];i++)
                {
                    switch(str[i])
                    {
                        case'a':
                        case'e':
                        case'i':
                        case'o':
                        case'u':
                        case'A':
                        case'E':
                        case'I':
                        case'O':
                        case'U':
                        count++;
                        break;
                    }
                }
            printf("vowels count :%d\n",count);
}
/*
output
Enter a string: Hello World
Vowels count: 3

Enter a string: berry cherry dairy kerry
Vowels count: 5

Enter a string: C Programming
Vowels count: 3

*/