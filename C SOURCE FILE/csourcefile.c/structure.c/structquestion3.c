//3.Create structure of employee which there is emp.ID,name,designation of 50 emplyees from user, print name character with emp.ID
//in tabular form?
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee
{
    int id;
    char name[50];
    char designation[50];
};

void main()
{
    struct employee emp[50];
    int i, j, n;

    clrscr();

    printf("Enter number of employees (max 50): ");
    scanf("%d", &n);
    getchar(); 

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d:\n", i+1);

        printf("Enter employee ID: ");
        scanf("%d", &emp[i].id);
        getchar(); 

        printf("Enter employee name: ");
        gets(emp[i].name);

        printf("Enter employee designation: ");
        gets(emp[i].designation);
    }

    printf("\nEmp.ID\tName (character by character)\n");
    printf("--------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t", emp[i].id);
        for(j = 0; emp[i].name[j] != '\0'; j++)
        {
            printf("%c", emp[i].name[j]);
        }
        printf("\n");
    }
}

/*
output:-
Enter number of employees (max 50): 2

Enter details of employee 1:
Enter employee ID: 101
Enter employee name: Aarav
Enter employee designation: Manager

Enter details of employee 2:
Enter employee ID: 102
Enter employee name: Priya
Enter employee designation: Developer

Emp.ID          Name (character by character)
--------------------------------------------
101             A r a v
102             P r i y a

*/
