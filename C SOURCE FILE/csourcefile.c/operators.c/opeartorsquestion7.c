
//7.Enter a decimal number from the user(float) and print the right hand side of the decimal point?

#include <stdio.h>
#include <conio.h>

void main()
{
    float num;
    int intpart;
    float fracpart;
    clrscr();

    printf("Enter a decimal number: ");
    scanf("%f", &num);  

    intpart = (int)num;
    fracpart = num - intpart;

    int rightside = (int)(fracpart * 1000000); 

    while(rightside % 10 == 0 && rightside != 0)
        rightside /= 10;

    printf("Right-hand side of decimal point: %d\n", rightside);
}

/*
output
Enter a decimal number: 12.345
Right-hand side of decimal point: 345

Enter a decimal number: 0.0067
Right-hand side of decimal point: 67

Enter a decimal number: 45.0
Right-hand side of decimal point: 0

*/