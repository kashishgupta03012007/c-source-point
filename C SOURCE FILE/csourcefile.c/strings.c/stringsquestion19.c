//19. enter data from the user the data consists of roll no., name,class , marks of 5 subjects.

#include <stdio.h>

int main() {
    char rollno[20];
    char name[50];
    char className[20];
    char marks[5][10];  // to store marks of 5 subjects as strings

    printf("Enter Roll Number: ");
    gets(rollno);

    printf("Enter Name: ");
    gets(name);

    printf("Enter Class: ");
    gets(className);

    printf("Enter Marks of 5 subjects:\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        gets(marks[i]);
    }

    printf("\n--- Student Details ---\n");
    printf("Roll Number: %s\n", rollno);
    printf("Name: %s\n", name);
    printf("Class: %s\n", className);

    printf("Marks:\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: %s\n", i + 1, marks[i]);
    }

    return 0;
}


/*
output
Enter Roll Number: 101
Enter Name: John Doe
Enter Class: 10A
Enter Marks of 5 subjects:
Subject 1: 80
Subject 2: 75
Subject 3: 90
Subject 4: 85
Subject 5: 70
--- Student Details ---
Roll Number: 101
Name: John Doe
Class: 10A
Marks:
Subject 1: 80
Subject 2: 75
Subject 3: 90
Subject 4: 85
Subject 5: 70


*/
