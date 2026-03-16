//5. enter two matrix from the user  and multiply them?
#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10], b[10][10], mul[10][10];
    int i, j, k, row, col;

    clrscr();
    printf("Enter number of rows and columns (square matrix): ");
    scanf("%d %d", &row, &col);

            printf("Enter elements of first matrix:\n");
            for(i=0; i<row; i++)
                for(j=0; j<col; j++)
                {
                    printf("a[%d][%d]= ", i, j);
                    scanf("%d", &a[i][j]);
                }

                printf("Enter elements of second matrix:\n");
                for(i=0; i<row; i++)
                    for(j=0; j<col; j++)
                    {
                        printf("b[%d][%d]= ", i, j);
                        scanf("%d", &b[i][j]);
                    }

                        // Initialize multiplication matrix
                        for(i=0; i<row; i++)
                            for(j=0; j<col; j++)
                                mul[i][j] = 0;

                            // Matrix multiplication
                            for(i=0; i<row; i++)
                                for(j=0; j<col; j++)
                                    for(k=0; k<col; k++)
                                        mul[i][j] += a[i][k] * b[k][j];

                                            printf("\nResult of matrix multiplication:\n");
                                            for(i=0; i<row; i++)
                                            {
                                                for(j=0; j<col; j++)
                                                    printf("%d\t", mul[i][j]);
                                                printf("\n");
                                            }

                                            getch();
}

/*
output:-
Enter number of rows and columns (square matrix): 2 2
Enter elements of first matrix:
a[0][0]= 1
a[0][1]= 2
a[1][0]= 3
a[1][1]= 4
Enter elements of second matrix:
b[0][0]= 5
b[0][1]= 6
b[1][0]= 7
b[1][1]= 8
Result of matrix multiplication:
19	22
43	50

*/
