//14.Enter a string from the user and enter a character ,it is exist or not?

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[50],ch;
    int i,found=0;
    clrscr();
        printf("Enter a string:");
        fgets(str,sizeof(str),stdin);
            
            if(str[strlen(str)-1]=='\n')
            {
                str[strlen(str)-1]='\0';
            }
                
                printf("Enter a character to search: ");
                scanf("%c",&ch);
                    
                    for(i=0;str[i]!='\0';i++)
                    {
                        if(str[i]==ch)
                        {
	                        found=1;
	                        break;
                        }
                    }
                            if(found)
                            printf("Character '%c' exists in the string.\n",ch);
                            else
                            printf("Character '%c' does not exist  in the string .\n",ch);
                    
}

/*
output
Enter a string: Hello
Enter a character to search: z
Character 'z' does not exist in the string.

Enter a string: Chai
Enter a character to search: C
Character 'C' exists in the string.


*/
