//1.Create structure of employee which there is emp.ID,name,designation of 50 emplyees 
//from user, print details in tabular form?

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
    if(n >= 50)
    {
        printf("You can only enter up to 50 employees.\n");
        return ;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d:\n", i+1);
        printf("Enter employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter employee name: ");
        scanf("%s", emp[i].name);  

        printf("Enter employee designation: ");
        scanf("%s", emp[i].designation); 
    }

    printf("\n---------------------------------------------------------\n");
    printf("%-10s %-20s %-20s\n", "emp.ID", "Name", "Designation");
    printf("---------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%-10d %-20s %-20s\n", emp[i].id, emp[i].name, emp[i].designation);
    }

    printf("---------------------------------------------------------\n");
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

---------------------------------------------------------
emp.ID     Name                 Designation        
---------------------------------------------------------
101        Aarav                Manager            
102        Priya                Developer          
103        Rohan                Accountant         
---------------------------------------------------------

*/
