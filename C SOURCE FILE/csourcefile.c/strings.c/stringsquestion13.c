//13.enter two string from the user and print difference each character?

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];
    int i;
    clrscr();
        printf("enter first string: ");
        gets(str1);
        printf("enter second string: ");
        gets(str2);
            
            printf("\n Difference of each charcter (ASCII): \n");
                for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
                {
                    printf("'%c'-'%c'=%d\n",str1[i],str2[i],str1[i]-str2[i]);
                }
}
/*
output

Enter first string: hello
Enter second string: world

Difference of each character (ASCII):
'h' - 'w' = -15
'e' - 'o' = -10
'l' - 'r' = -6
'l' - 'l' = 0
'o' - 'd' = 11


Enter first string: ABC
Enter second string: XYZ

Difference of each character (ASCII):
'A' - 'X' = -23
'B' - 'Y' = -23
'C' - 'Z' = -23

*/