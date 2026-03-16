//2.Enter a number from the user and check that the number is divisible by any
//prime number or not?
#include <stdio.h>
#include <conio.h>

int prime(int n) {
    if(n <= 1)
        return 0;
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

void main() {
    int num, flag = 0;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nPrime numbers that divide %d are: ", num);
    for(int i = 2; i <= num/2; i++) {
        if(prime(i) && num % i == 0) {
            printf("%d ", i);
            flag = 1;
        }
    }

    if(flag == 0)
        printf("None (not divisible by any prime number)\n");
    else
        printf("\n%d is divisible by prime numbers listed above.\n", num);

    getch(); // wait for key press
}

/*
output:-
Enter a number: 30

Prime numbers that divide 30 are: 2 3 5 
30 is divisible by prime numbers listed above.

*/