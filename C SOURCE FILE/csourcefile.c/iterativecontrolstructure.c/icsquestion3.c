//3.Enter a number from the user and check it is prime number or not?
#include <stdio.h>
#include <conio.h>

int main() {
    int num, i, flag = 0;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1) {
        printf("%d is not a prime number.\n", num);
        getch();
        return 0;
    }

    for(i = 2; i <= num / 2; i++) {
        if(num % i == 0) {  // Corrected
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    getch();
    return 0;
}

/*
output:-
Enter a number: 17
17 is a prime number.
Enter a number: 20
20 is not a prime number.

*/

