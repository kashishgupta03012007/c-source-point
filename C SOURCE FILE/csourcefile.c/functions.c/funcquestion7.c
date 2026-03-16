//7.make a function for find out power of number,enter number and power from user?

#include<stdio.h>
#include<conio.h>

int power(int base,int exp);
int power(int base,int exp)
{
    int i,result=1;
    for(i=1;i<=exp;i++)
    {
    result*=base;
    }
    return result;
}
        void main()
        {
        int num,p,result;
        clrscr();
        printf("Enter a number:");
        scanf("%d",&num);
        printf("enter power:");
        scanf("%d",&p);
            result=power(num,p);
            printf("%d rasied to the power %d is= %d\n",num,p,result);
}
/*
output:-
Enter a number: 2
Enter power: 5
2 raised to the power 5 is= 32

*/