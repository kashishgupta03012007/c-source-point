//3.enter 2 matrix from the user and add them?

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10],b[10][10],sum[10][10];
    int row,col,i,j;
    clrscr();
    printf("Enter rows and columns: ");
    scanf("%d %d",&row,&col);
    printf("Enter elements of first matrix: \n");

        for(i=0;i<row;i++)
	    {
	       for(j=0;j<col;j++)
	       {
		        printf("First matrix element%d %d:",i+1,j+1);
		        scanf("%d",&a[i][j]);
		    }

	    }
    printf("Enter elements of second matrix: \n");
                for(i=0;i<row;i++)
                {
                    for(j=0;j<col;j++)    
                    {
                        printf("second matrix element%d %d:",i + 1,j + 1);
                        scanf("%d",&b[i][j]);
                    }
                }
                     for(i=0;i<row;i++)
                        {
                            for(j=0;j<col;j++)
                                {
                                    sum[i][j]=a[i][j]+b[i][j];
                                }
                        }
    printf("\n Sum of the two matrices: \n");
                                for(i=0;i<row;i++)
                                {
                                    for(j=0;j<col;j++)
                                    {
                                        printf("%d",sum[i][j]);
                                    }
	                            printf("\n");
                                }
}
/*
output:-
Enter rows and columns: 2 2
Enter elements of first matrix: 
First matrix element1 1: 1
First matrix element1 2: 2
First matrix element2 1: 3
First matrix element2 2: 4
Enter elements of second matrix: 
second matrix element1 1: 5
second matrix element1 2: 6
second matrix element2 1: 7
second matrix element2 2: 8

Sum of the two matrices: 
6 8
10 12

*/
