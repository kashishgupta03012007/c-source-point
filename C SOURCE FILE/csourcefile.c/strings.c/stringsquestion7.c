//7.Enter a string from user and compare those string?

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];
    clrscr();
    printf("enter first string: ");
        gets(str1);
        printf("enter second string: ");
        gets(str2);
                
            int l=strcmp(str1,str2);
                printf("%d",l);
}
/*
output

enter first string: Hello
enter second string: Hello
0


enter first string: Apple
enter second string: Banana
-1


enter first string: Zebra
enter second string: Apple
25

*/