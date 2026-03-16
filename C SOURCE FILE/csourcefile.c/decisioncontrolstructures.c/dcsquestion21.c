//21.enter date,month,year and check it is valid date or not?
#include<stdio.h>
#include<conio.h>

void main()
{
    int date, month, year;
    clrscr();

    printf("Enter the date: ");
    scanf("%d", &date);
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    // Basic validation
    if (year < 1 || month < 1 || month > 12 || date < 1 || date > 31)
    {
        printf("Invalid date");
    }
    // Months with 30 days
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && date > 30)
    {
        printf("Invalid date");
    }
    // February
    else if (month == 2)
    {
        // Leap year check
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            if (date > 29)
                printf("Invalid date");
            else
                printf("Valid date");
        }
        else
        {
            if (date > 28)
                printf("Invalid date");
            else
                printf("Valid date");
        }
    }
    // All other valid dates
    else
    {
        printf("Valid date");
    }

    getch();
}

/*
OUTPUT:-
Enter the date: 28
Enter the month: 2
Enter the year: 2023
Valid date

Enter the date: 29
Enter the month: 2
Enter the year: 2023
Invalid date

Enter the date: 29
Enter the month: 2
Enter the year: 2024
Valid date

Enter the date: 31
Enter the month: 4
Enter the year: 2023
Invalid date

Enter the date: 31
Enter the month: 7
Enter the year: 2023
Valid date

*/




