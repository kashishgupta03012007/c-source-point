//1.Enter the four number from the user and print it into matrix.
#include<stdio.h>
#include<conio.h>
void main()
{
    int matrix[2][2],j,i;
    clrscr();
    printf("Enter four number seprated by space:\n");
        for(i=0;i<2;i++)
        {
          for(j=0;j<2;j++)
          {
            scanf("%d",&matrix[i][j]);
          }
        }
        printf("\nMatrix is:\n");
          for(i=0;i<2;i++)
          {
            for(j=0;j<2;j++)
              { 
                printf("%d\t",matrix[i][j]);
              }
          printf("\n");
          }
}
/*
output:-
Enter four number seprated by space:
1 2 3 4

Matrix is:
1         	2
3         	4

*/