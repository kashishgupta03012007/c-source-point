//11.Enter marks of students and calculate average of students marks?

#include<stdio.h>
#include<conio.h>

void main()
{
    int marks1,marks2,marks3,marks4,marks5;
    float avg;
    clrscr();
    printf("enter the marks of first subject:-");
    scanf("%d",&marks1);
    printf("enter the marks of second subject:-");
    scanf("%d",&marks2);
    printf("enter the marks of third subject:-");
    scanf("%d",&marks3);
    printf("enter the marks of fourth subject:-");
    scanf("%d",&marks4);
    printf("enter the marks of fifth subject:-");
    scanf("%d",&marks5);
        
                avg=(marks1+marks2+marks3+marks4+marks5)/5.0;
                    printf(" the average is :%.2f\n",avg);
}

/*
output
Enter the marks of first subject: 80
Enter the marks of second subject: 70
Enter the marks of third subject: 90
Enter the marks of fourth subject: 85
Enter the marks of fifth subject: 75
The average is: 80.00

Enter the marks of first subject: 60
Enter the marks of second subject: 65
Enter the marks of third subject: 70
Enter the marks of fourth subject: 75
Enter the marks of fifth subject: 80
The average is: 70.00

*/