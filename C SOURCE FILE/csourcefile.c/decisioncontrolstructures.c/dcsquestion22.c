//22.enter current date of DOB of user and find out difference?
#include <stdio.h>
#include <conio.h>

// Function to check for leap year
int isLeap(int year) {
    return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}

int main() {
    int c_day, c_month, c_year;
    int b_day, b_month, b_year;
    int age_day, age_month, age_year;

    // Days in each month
    int monthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    // Input current date
    printf("Enter current date (dd mm yyyy): ");
    scanf("%d %d %d", &c_day, &c_month, &c_year);

    // Input date of birth
    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &b_day, &b_month, &b_year);

    // Adjust February for leap year
    if (isLeap(c_year))
        monthDays[1] = 29;

    // Calculate day difference
    if (c_day < b_day) {
        // borrow days from previous month
        if (c_month == 1) {
            c_month = 12;
            c_year -= 1;
        } else {
            c_month -= 1;
        }
        c_day += monthDays[c_month - 1];
    }
    age_day = c_day - b_day;

    // Calculate month difference
    if (c_month < b_month) {
        c_month += 12;
        c_year -= 1;
    }
    age_month = c_month - b_month;

    // Calculate year difference
    age_year = c_year - b_year;

    // Output result
    printf("\nYour Age is: %d years, %d months, and %d days.\n",
           age_year, age_month, age_day);

    return 0;
}

/*
OUTPUT:-
Enter current date (dd mm yyyy): 6 11 2025
Enter date of birth (dd mm yyyy): 15 5 2000
Your Age is: 25 years, 5 months, and 22 days.

Enter current date (dd mm yyyy): 1 1 2025
Enter date of birth (dd mm yyyy): 2 2 2000
Your Age is: 24 years, 10 months, and 30 days.

Enter current date (dd mm yyyy): 1 3 2024
Enter date of birth (dd mm yyyy): 29 2 2000
Your Age is: 24 years, 0 months, and 1 days.

*/