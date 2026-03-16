
//14.Enter two number from the user one is base and second is power.write the result?
#include <stdio.h>
#include <conio.h>

void main() {
    double base, result = 1;
    int power, i;
    clrscr();

    printf("Enter base number: ");
    scanf("%lf", &base);
    printf("Enter power (integer): ");
    scanf("%d", &power);

    if (power >= 0) {
        for (i = 1; i <= power; i++) {
            result *= base;
        }
    } else { // negative power
        for (i = 1; i <= -power; i++) {
            result *= base;
        }
        result = 1 / result;
    }

    printf("%.2lf raised to the power %d = %.2lf\n", base, power, result);
    getch();
}

/*
OUTPUT:-
Enter base number: 2
Enter power (integer): 3
2.00 raised to the power 3 = 8.00

Enter base number: 2
Enter power (integer): -2
2.00 raised to the power -2 = 0.25

Enter base number: 5
Enter power (integer): 0
5.00 raised to the power 0 = 1.00

*/