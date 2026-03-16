//9.Enter float number from the user and round of the number?

#include <stdio.h>
#include <conio.h>

void main()
{
    float num;
    int rounded;
    clrscr();

    printf("Enter a number: ");
    scanf("%f", &num);

    // Round OFF
    rounded = (num >= 0) ? (int)(num + 0.5) : (int)(num - 0.5);

    printf("Rounded number: %d\n", rounded);
}
/*
output
Enter a number: 12.34
Rounded number: 12

Enter a number: 56.78
Rounded number: 57

Enter a number: -4.6
Rounded number: -5

Enter a number: -4.3
Rounded number: -4

*/