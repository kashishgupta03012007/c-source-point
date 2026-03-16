//2.Enter the matrix from and transpose them?

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10], transpose[10][10];
    int r, c, i, j;

    clrscr();
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("\nEnter elements of matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("\nOriginal Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    // Compute transpose
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            transpose[j][i] = a[i][j];

    printf("\nTranspose of Matrix:\n");
    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
            printf("%d\t", transpose[i][j]);
        printf("\n");
    }

    getch();
}


/*
output:-
Enter number of rows: 2
Enter number of columns: 3

Enter elements of matrix:
1 2 3
4 5 6

Original Matrix:
1	2	3
4	5	6

Transpose of Matrix:
1	4
2	5
3	6

*/