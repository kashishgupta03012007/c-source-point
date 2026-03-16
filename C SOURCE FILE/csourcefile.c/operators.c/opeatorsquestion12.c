//12.Calculate simple intrest = (pxrxt)/100 ?

#include<stdio.h>
#include<conio.h>

void main()

{
    float p,r,t,interest;
    clrscr();
    printf("Enter the principal rate:");
    scanf("%f",&p);
    printf("Enter the rate of interest:");
    scanf("%f",&r);
    printf("Enter the time:");
    scanf("%f",&t);
        
            intrest=p*r*t/100;
            printf("The simple interest is: %f\n",interest);
}


/*
output:-
Enter the principal amount: 1000
Enter the rate of interest: 5
Enter the time (in years): 2
The simple interest is: 100.000000

Enter the principal amount: 1500
Enter the rate of interest: 4.5
Enter the time (in years): 3
The simple interest is: 202.500000

Enter the principal amount: 5000
Enter the rate of interest: 6
Enter the time (in years): 1.5
The simple interest is: 450.000000

*/
