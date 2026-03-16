/*5.Enter two number from the user and add the number and show the answer again take2 number from user subtract the number and 
show the result again enter two no from the user and multiplye the number and show the answer  again enter two no from the user
and divide the number and show the answer  again enter two no from the user and find the remainder and show the answer ?  */

#include<stdio.h>
#include<conio.h>

void main()
{
    int num1,num2,sum;
    clrscr();
    //add
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    
            sum=num1+num2;
            printf("ADDITION %d\n",sum);
    
                        //subtraction
                        printf("Enter first number:");
                        scanf("%d",&num1);
                        printf("Enter second number:");
                        scanf("%d",&num2);
                                
                                sum=num1-num2;
                                printf("SUBTRACT %d\n",sum);
                                        
                                        //multiply
                                        printf("Enter first number:");
                                        scanf("%d",&num1);  
                                        printf("Enter second number:");
                                        scanf("%d",&num2);
                                                
                                                sum=num1*num2;
                                                printf("MULTILPLE %d\n",sum);
   
                                                        //divide
                                                        printf("Enter first number:");
                                                        scanf("%d",&num1);
                                                        printf("Enter second number:");
                                                        scanf("%d",&num2);
                                                        if(num2 != 0)
                                                                sum=num1/num2;
                                                                else
                                                                sum = 0;
                                                                printf("DIVISION %d\n",sum);
                                                                        //MODULUS
                                                                        printf("Enter first number:");
                                                                        scanf("%d",&num1);
                                                                        printf("Enter second number:");
                                                                        scanf("%d",&num2);
                                                                                if(num2 != 0)
                                                                                sum=num1%num2;
                                                                                else
                                                                                sum=0;
                                                                                printf("REMAINDER %d\n",sum);

}


/*
output
Enter first number: 10
Enter second number: 5
ADDITION 15

Enter first number: 10
Enter second number: 5
SUBTRACT 5

Enter first number: 10
Enter second number: 5
MULTIPLICATION 50

Enter first number: 10
Enter second number: 5
DIVISION 2

Enter first number: 10
Enter second number: 3
REMAINDER 1

*/