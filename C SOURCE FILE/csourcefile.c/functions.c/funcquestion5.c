//5.SWAP NUMBERS USING CALL BY ADDRESS

#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;   // Store value of a in temp
    *a = *b;     // Put value of b into a
    *b = temp;   // Put temp (old a) into b
}

void main() 
{
    int num1, num2;
    clrscr();
    printf("Enter two numbers: ");             
    scanf("%d %d", &num1, &num2);

        printf("\nBefore swapping:\n");
        printf("num1 = %d, num2 = %d\n", num1, num2);

            swap(&num1, &num2);             // Call function to swap

                printf("\nAfter swapping:\n");
                    printf("num1 = %d, num2 = %d\n", num1, num2);
}

/*
output:-
Enter two numbers: 5 10

Before swapping:
num1 = 5, num2 = 10

After swapping:
num1 = 10, num2 = 5

*/