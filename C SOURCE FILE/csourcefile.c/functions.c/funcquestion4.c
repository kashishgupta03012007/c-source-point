//4.Making following program using local and global variable?
//Factorial,reverse,palindrome,prime numbers,armstrong,fibonacci

#include <stdio.h>
#include <conio.h>

// Global variable
int num;

// Function declarations
void factorial();
void reverse();
void palindrome();
void prime();
void armstrong();
void fibonacci();

void main() 
{
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    factorial();
    reverse();
    palindrome();
    prime();
    armstrong();
    fibonacci();
}

void factorial() {
    int i, fact = 1; // local variables
    for(i = 1; i <= num; i++) {
        fact *= i;
    }
    printf("\nFactorial of %d = %d", num, fact);
}

void reverse() {
    int n = num, rev = 0;
    while(n > 0) {
        rev = rev*10 + n%10;
        n /= 10;
    }
    printf("\nReverse of %d = %d", num, rev);
}

void palindrome() {
    int n = num, rev = 0, temp = n;
    while(n > 0) {
        rev = rev*10 + n%10;
        n /= 10;
    }
    if(temp == rev)
        printf("\n%d is a palindrome number", num);
    else
        printf("\n%d is not a palindrome number", num);
}

void prime() {
    int i, count = 0;
    for(i = 1; i <= num; i++) {
        if(num % i == 0)
            count++;
    }
    if(count == 2)
        printf("\n%d is a prime number", num);
    else
        printf("\n%d is not a prime number", num);
}

void armstrong() {
    int n = num, rem, sum = 0;
    while(n > 0) {
        rem = n % 10;
        sum += rem*rem*rem;
        n /= 10;
    }
    if(sum == num)
        printf("\n%d is an Armstrong number", num);
    else
        printf("\n%d is not an Armstrong number", num);
}

void fibonacci() {
    int a = 0, b = 1, c, i;
    printf("\nFibonacci series up to %d terms: ", num);
    for(i = 1; i <= num; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

/*
output:-
Enter a number: 5
Factorial of 5 = 120
Reverse of 5 = 5
5 is a palindrome number
5 is a prime number
5 is not an Armstrong number
Fibonacci series up to 5 terms: 0 1 1 2 3 

*/