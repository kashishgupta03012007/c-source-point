/*12.Enter a number from the user if the user enter 1 then you have to perform addition operation by entering 2 numberfrom user
add it and display answer.if user enter 2 then subtract or if user enter 3 then multiply or if user enter 4then divide or if user
enter 5 then modulo or if any other number then print invalid if user want to quit the program then user will enter Q.?*/
#include <stdio.h>
#include <conio.h>

void main() {
    int choice;
    float num1, num2, result;
    char ch;

    clrscr(); 

    while(1) {
        printf("\nCHOICE:\n");
        printf("1. Addition\n2. Subtract\n3. Multiply\n4. Division\n5. Modulus\nQ. Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &ch);  // Space before %c to ignore leftover newline

        if(ch == 'Q' || ch == 'q') {
            printf("Exiting program...\n");
            break;
        }

        choice = ch - '0';

        if(choice >= 1 && choice <= 5) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }

        switch(choice) {
            case 1:
                result = num1 + num2;
                printf("Addition = %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Subtraction = %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Multiplication = %.2f\n", result);
                break;
            case 4:
                if(num2 != 0)
                    printf("Division = %.2f\n", num1 / num2);
                else
                    printf("Error: Division by zero not allowed\n");
                break;
            case 5:
                if((int)num2 != 0)
                    printf("Modulus = %d\n", (int)num1 % (int)num2);
                else
                    printf("Error: Modulo by zero not allowed\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }

    getch(); // Waits for a key press before closing
}

/*
OUTPUT:-

CHOICE:
1. Addition
2. Subtract
3. Multiply
4. Division
5. Modulus
Q. Quit
Enter your choice: 1
Enter two numbers: 10 20
Addition = 30.00

CHOICE:
1. Addition
2. Subtract
3. Multiply
4. Division
5. Modulus
Q. Quit
Enter your choice: 2
Enter two numbers: 50 15
Subtraction = 35.00

CHOICE:
1. Addition
2. Subtract
3. Multiply
4. Division
5. Modulus
Q. Quit
Enter your choice: 3
Enter two numbers: 6 7
Multiplication = 42.00

CHOICE:
1. Addition
2. Subtract
3. Multiply
4. Division
5. Modulus
Q. Quit
Enter your choice: 4
Enter two numbers: 20 5
Division = 4.00

CHOICE:
1. Addition
2. Subtract
3. Multiply
4. Division
5. Modulus
Q. Quit
Enter your choice: 5
Enter two numbers: 10 3
Modulus = 1

CHOICE:
1. Addition
2. Subtract
3. Multiply
4. Division
5. Modulus
Q. Quit
Enter your choice: 9
Invalid choice

CHOICE:
1. Addition
2. Subtract
3. Multiply
4. Division
5. Modulus
Q. Quit
Enter your choice: Q
Exiting program...


*/
