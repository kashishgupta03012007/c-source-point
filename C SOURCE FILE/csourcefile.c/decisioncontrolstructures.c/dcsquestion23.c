//23.Write a program to calculate the area and perimeter of rectangle?
#include<stdio.h>
#include<conio.h>

void main()
{

int l,b,area,perimeter;
clrscr();
printf("Enter the length of the rectangle:");
scanf("%d",&l);
printf("Enter the breadth of the rectangle:");
scanf("%d",&b);
area=l*b;
perimeter=2 * (l+b);
printf("The area of rectangle is:%d\n",area);
printf("The perimeter of rectangle is:%d",perimeter);
}

/*
OUTPUT:-
Enter the length of the rectangle: 5
Enter the breadth of the rectangle: 3
The area of rectangle is: 15
The perimeter of rectangle is: 16

*/