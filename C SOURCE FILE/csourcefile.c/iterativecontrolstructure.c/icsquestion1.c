//1.Enter a number from the user and find out the binary of that number?

#include<stdio.h>
#include<conio.h>

void binary(int n);
void binary(int n)
{
    int binary[32];
    int i=0;
        if(n==0)
        {
        printf("0");
        }
            while(n>0)
            {
            binary[i]=n%2;
            n=n/2;
            i++;
            }
                for(int j=i-1;j>=0;j--)
                {
                printf("%d",binary[j]);
                }
                printf("\n");
                }
                    void main()
                    {
                    int num;
                    clrscr();
                    printf("Enter the number:");
                    scanf("%d",&num);
                    binary(num);
                    printf("Binary of%d is:",num);
                    }

 /*
output:-
Enter the number: 10
1010
Binary of10 is:

*/