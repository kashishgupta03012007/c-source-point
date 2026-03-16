//4.Enter 2 matrix from user and subtract them?

#include<stdio.h>
#include<conio.h>

void main()

{ 
    int a[10][10],b[10][10],sub[10][10];
    int i,j,row,col;
    clrscr();
    printf("Enter rows and columns: ");
    scanf("%d %d",&row,&col);
    printf("Enter elements of first matrix: \n");
            for(i=0;i<row;i++)
            {
            for(j=0;j<col;j++)
            {
                    printf("a[%d][%d]= ",i,j);
                    scanf("%d",&a[i][j]);
                }
            }
            printf("Enter elements of second matrix: \n");
                for(i=0;i<row;i++)
                {
                    for(j=0;j<col;j++)
                    {
                        printf("b[%d][%d]= ",i,j);
                        scanf("%d",&b[i][j]);
                    }
                }

                    for(i=0;i<row;i++)
                    {
                        for(j=0;j<col;j++)
                        {
                            sub[i][j] = a[i][j]-b[i][j];
                        }
                    }
                     printf("\n result of the matrix after subtractin: \n");
                        for(i=0;i<row;i++)
                        {
                                for(j=0;j<col;j++)
                                {
                                    printf("%d\t",sub[i][j]);
                                }   
                                printf("\n");
                            }
}
/*
output:-
Enter rows and columns: 2 2
Enter elements of first matrix: 
a[0][0]= 5
a[0][1]= 7
a[1][0]= 3
a[1][1]= 8
Enter elements of second matrix: 
b[0][0]= 2
b[0][1]= 4
b[1][0]= 1
b[1][1]= 5

Result of the matrix after subtraction: 
3	3
2	3

*/
