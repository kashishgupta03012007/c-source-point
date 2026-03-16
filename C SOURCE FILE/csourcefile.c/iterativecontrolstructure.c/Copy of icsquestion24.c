//24.Enter a number from user and check it is armstrong number or not?

#include <stdio.h>
#include <math.h>

int main() 
{
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

        printf("Enter a number: ");
        scanf("%d", &num);

            originalNum = num;

                // Count number of digits
                while (originalNum != 0) 
                {
                    originalNum /= 10;
                    n++;
                }

                    originalNum = num;

                         // Calculate the sum of digits raised to the power n
                        while (originalNum != 0)
                        {
                            remainder = originalNum % 10;
                            result += pow(remainder, n);
                            originalNum /= 10;
                        }

                                // Compare and print result
                                if ((int)result == num)
                                    printf("%d is an Armstrong number.\n", num);
                                else
                                    printf("%d is not an Armstrong number.\n", num);

                                return 0;
}


/*
output:-
Enter a number: 153
153 is an Armstrong number.

Enter a number: 123
123 is not an Armstrong number.

Enter a number: 9474
9474 is an Armstrong number.

*/