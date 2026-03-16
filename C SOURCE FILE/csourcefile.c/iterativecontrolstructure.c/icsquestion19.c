//19.Enter password from user maximum20 digits/ character press enter key if you want to exit?

#include <stdio.h>
#include<conio.h>
void main() 
    {
    char password[21]; 
    clrscr();

    while (1) {
        printf("Enter password (max 20 characters) or press Enter to exit: ");
        gets(password);  

        // check exit condition
        if (password[0] == '\0') {
            printf("Exiting program...\n");
            break;  
        }
        printf("You entered: %s\n\n", password);
    }

}

/*
output
Enter password (max 20 characters) or press Enter to exit: mySecret123
You entered: mySecret123

Enter password (max 20 characters) or press Enter to exit: helloWorld
You entered: helloWorld

Enter password (max 20 characters) or press Enter to exit: 
Exiting program...


*/