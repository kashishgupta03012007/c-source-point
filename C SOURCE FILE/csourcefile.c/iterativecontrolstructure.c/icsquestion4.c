//4.enter a number from the user and print all digit of the number in seprate line?

#include<stdio.h>
#include<conio.h>

void main()
{
    long long num;
    clrscr();
    printf("Enter a number:");
    scanf("%11d",&num);
        if(num<0)
        {
        num=-num;
        }
            if(num == 0)
            {
                printf("0\n");
            } 
            else
            {
                while(num>0)
                {
                    printf("%lld\n",num%10);
                    num/=10;
                }
            }
}

/*
output:-
Enter a number: 12345
5
4
3
2
1

*/