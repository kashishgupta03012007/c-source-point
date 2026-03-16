//6.swap numbers using call by function?

#include<stdio.h>
#include<conio.h>

    void swap(int *x,int *y);
    void swap(int *x,int *y)
        {
            int temp;
            temp=*x;
            *x=*y;
            *y=temp;
        }

            int main()
            {
                int num1,num2;
                clrscr();
                printf("Enter a first number:");
                scanf("%d",&num1);
                printf("Enter second number:");
                scanf("%d",&num2);
                printf("before swapping num1=%d,num2=%d\n",num1,num2);

                    swap(&num1,&num2);
                printf("After swapping: num1=%d,num2=%d\n",num1,num2);
                return 0;
        }
    
/*
output:-
Enter a first number: 7
Enter second number: 12
before swapping num1=7,num2=12
After swapping: num1=12,num2=7

*/