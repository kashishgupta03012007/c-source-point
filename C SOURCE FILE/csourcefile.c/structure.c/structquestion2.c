//2.Create structure of employee which there is emp.ID,name,designation of 50 emplyees from user, print only name of employee?

#include<stdio.h>
#include<conio.h>

struct employee
{
    int id;
    char name[50];
    char designation[50];
};

void main()
{
    struct employee emp[50];
    int i, n;
    clrscr(); 

    printf("Enter number of employees (max 50): ");
    scanf("%d", &n);

    if(n > 50)
    {
        printf("You can only enter up to 50 employees.\n");
        return;
    }

    for(i=0; i<n; i++)
    {
        printf("\nEnter details of employee %d: \n", i+1);
        printf("Enter employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter employee name: ");
        scanf("%s", emp[i].name);

        printf("Enter employee designation: ");
        scanf("%s", emp[i].designation);
    }

    printf("\nList of employee names:\n");
    printf("----------------------------------------------------\n");
    for(i=0; i<n; i++)
    {
        printf("%d. %s\n", i+1, emp[i].name);
    }
}
/*
output:-
Enter number of employees (max 50): 3

Enter details of employee 1: 
Enter employee ID: 101
Enter employee name: Aarav
Enter employee designation: Manager

Enter details of employee 2: 
Enter employee ID: 102
Enter employee name: Priya
Enter employee designation: Developer

Enter details of employee 3: 
Enter employee ID: 103
Enter employee name: Rohan
Enter employee designation: Accountant

List of employee names:
----------------------------------------------------
1. Aarav
2. Priya
3. Rohan

*/