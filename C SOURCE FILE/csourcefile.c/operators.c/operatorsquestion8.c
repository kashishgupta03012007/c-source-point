
//8. enter a number from the user and find out the cube of the number?

#include<stdio.h>
#include<conio.h>

void main()

{
    int num;
    clrscr();
    printf("Enter a number:");
    scanf("%d",&num);
    int cube=num*num*num;
    printf("Cube of %d is : %d\n",num,cube);
}

/*
output
Enter a number: 3
Cube of 3 is: 27

Enter a number: 5
Cube of 5 is: 125

Enter a number: -2
Cube of -2 is: -8

*/