//8.make function for find out cube a user entered number?

int cube(int n);
int cube(int n)
{
return n*n*n;
}
    void main()
    {
    int num,result;
    clrscr();
        printf("Enter the number:");
        scanf("%d",&num);
            result=cube(num);
            printf("cube of %d is =%d\n",num,result);
}
/*
output:-
Enter the number: 4
Cube of 4 is = 64
*/