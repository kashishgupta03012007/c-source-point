//17.Enter the string from the user and enter bound number and print character on that bound?

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

    char str[100];
    int bound;
    clrscr();
        printf("Enter a string: ");
        fgets(str,sizeof(str),stdin);
            
            str[strcspn(str,"\n")]=0;
            printf("Enter the bound (index): ");
            scanf("%d",&bound);
	
                if(bound>=0&&bound<strlen(str))
	            {
	                printf("Character at index %d: %c\n",bound,str[bound]);
	            }
	            else
	            {
	                printf("Invalid index.index out of bounds.\n");
	            }
}

/*
output
Enter a string: HelloWorld
Enter the bound (index): 4
Character at index 4: o

Enter a string: OpenAI
Enter the bound (index): 0
Character at index 0: O

Enter a string: ChatGPT
Enter the bound (index): 10
Invalid index. Index out of bounds.

*/