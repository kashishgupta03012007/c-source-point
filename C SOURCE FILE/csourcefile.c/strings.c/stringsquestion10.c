/*10.Enter a string from user,if the user enter 0 then you will print first character of string if user enter 1 then you will print
second character of the string, if user enter 2 then you will print third character of string, if user enter 3 then you will print
fourth character of string and if out of string you will print out of bound?*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[50];
    int index;
    clrscr();
        printf("enter a string: ");
        fgets(str,sizeof(str),stdin);

	        if(str[strlen(str)-1]=='\n')
	        {
	            str[strlen(str)-1]='\0';
	        }

                printf("Enter a number: ");
                scanf("%d",&index);
                    if(index>=0&&index<strlen(str))
                    {
                        printf("Character at index %d is '%c'\n",index,str[index]);
                    }
                    else
                    {
                        printf("Out of bound\n");
                    }
}

/*
output

Enter a string: length
Enter a number: 2
Character at index 2 is 'e'

Enter a string: Hello
Enter a number: 10
Out of bound

*/