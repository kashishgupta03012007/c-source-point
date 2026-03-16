
//2.Write a program to enter 10 number from user and add the number and display the answer/

#include<stdio.h>
#include<conio.h>

int input()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    return n;
}
        int add(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j)
        {       
            return a+b+c+d+e+f+g+h+i+j;
        }

           void output(int res)
            {
                printf("the result is:%d",res);
            }

                void main()
                {
                    int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,result;
                    clrscr();
                    x1=input();
                    x2=input();
                    x3=input();
                    x4=input();
                    x5=input();
                    x6=input();
                    x7=input();
                    x8=input();
                    x9=input();
                    x10=input();
                            result=add(x1,x2,x3,x4,x5,x6,x7,x8,x9,x10);
                            output(result);
}

/*
output:-
Enter the number: 5
Enter the number: 10
Enter the number: 7
Enter the number: 3
Enter the number: 12
Enter the number: 8
Enter the number: 4
Enter the number: 6
Enter the number: 9
Enter the number: 11
The result is:75

*/
