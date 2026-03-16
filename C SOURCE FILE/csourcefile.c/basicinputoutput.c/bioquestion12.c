//12.enter password  display like ******?

#include <stdio.h>
#include <conio.h>   

void main() {
    char password[20];
    int i = 0;
    char ch;

    printf("Enter password: ");
    while (1) {
        ch = getch();         // read single character, not shown on screen
        if (ch == 13) break; 
        password[i] = ch;
        i++;
        printf("*");          // show * instead of actual char
    }
    password[i] = '\0';      

    printf("\nPassword entered successfully!\n");
    
}

/*
output:-
Enter password: ********
Password entered successfully!
*/