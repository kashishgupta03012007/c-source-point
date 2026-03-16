/*1.Write a program to enter 2 number from the user add them and display the
answer,again enter 2 number from the user subtract them and display the answer
again enter 2 number from the user add them and display the answer again enter
2 number from user multiply them and display the answer  again enter 2 number
from user subtract them and display the answer again enter 2 number from user
multiply them and display the answer again enter 2 no form user divide them
and display the answer again enter 2 no form user divide them and display the answer
again enter two number from user and add them display the anser?*/

#include <stdio.h>
#include <conio.h>

//-------------------------input------------------------
int input_int() 
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    return x;
}

float input_float() {
    float x;
    printf("Enter a number: ");
    scanf("%f", &x);
    return x;
}
//-------------------------calculations---------------------------
        int add(int a, int b) 
        {
            return a + b;
        }
        int sub(int a, int b)
        { 
            return a - b; 
        }
        int multiply(int a, int b) 
        { 
            return a * b; 
        }
        float divide(float a, float b) 
        { 
            return a / b; 
        }
//-------------------------output------------------------
            void output_int(int res) 
            { 
                printf("The result is: %d\n", res); 
            }
            void output_float(float res) 
            { 
                printf("The result is: %.2f\n", res);
            }

            void main() {
                int x, y, res_int;
                float a, b, res_float;
                clrscr();  // only if supported

                // 1. Add
                x = input_int();
                y = input_int();
                res_int = add(x, y);
                output_int(res_int);

                // 2. Subtract
                x = input_int();
                y = input_int();
                res_int = sub(x, y);
                output_int(res_int);

                // 3. Add
                x = input_int();
                y = input_int();
                res_int = add(x, y);
                output_int(res_int);

                // 4. Multiply
                x = input_int();
                y = input_int();
                res_int = multiply(x, y);
                output_int(res_int);

                // 5. Subtract
                x = input_int();
                y = input_int();
                res_int = sub(x, y);
                output_int(res_int);

                // 6. Multiply
                x = input_int();
                y = input_int();
                res_int = multiply(x, y);
                output_int(res_int);

                // 7. Divide
                a = input_float();
                b = input_float();
                res_float = divide(a, b);
                output_float(res_float);

                // 8. Divide
                a = input_float();
                b = input_float();
                res_float = divide(a, b);
                output_float(res_float);

                // 9. Add
                x = input_int();
                y = input_int();
                res_int = add(x, y);
                output_int(res_int);
            }

/*
output:-
Enter a number: 5
Enter a number: 3
The result is: 8

Enter a number: 10
Enter a number: 4
The result is: 6

Enter a number: 7
Enter a number: 2
The result is: 9

Enter a number: 3
Enter a number: 4
The result is: 12

Enter a number: 9
Enter a number: 5
The result is: 4

Enter a number: 6
Enter a number: 7
The result is: 42

Enter a number: 10
Enter a number: 2
The result is: 5.00

Enter a number: 20
Enter a number: 4
The result is: 5.00

Enter a number: 8
Enter a number: 3
The result is: 11

*/