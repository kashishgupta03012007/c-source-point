//4.Enter student details like roll,name,fee, DOB and print all the detail by ascending order of roll number?

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
	int roll;
	char name[50];
	int fee;
	char dob[15];
} ;
void main()
{
struct student s[100],temp;
int n,i,j;
clrscr();
printf("Enter number of students: ");
scanf("%d",&n);

     for(i=0;i<n;i++)
     {
      printf("\nEnter details of student %d:\n",i+1) ;
      printf("Roll Number: ");
      scanf("%d",&s[i].roll);
      printf("Name: ");
      scanf("%s",s[i].name);
      printf("Fee: ");
      scanf("%d",&s[i].fee);
      printf("Date of birth(DD/MM/YYYY): ");
      scanf("%s",s[i].dob);
     }

for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(s[i].roll>s[j].roll)
  {
   temp=s[i];
   s[i]=s[j];
   s[j]=temp;
   }
  }
}
printf("\n Students details in Ascending order of roll number: \n");
printf("-------------------------------------------------------------------\n");
printf("Roll\tName\t\tFee\t\tDOB\n");
printf("------------------------------------------------------------------\n");
  for(i=0;i<n;i++)
  {
   printf("%d\t%-10s\t%.2d\t%s\n",s[i].roll,s[i].name,s[i].fee,s[i].dob);
   }

}

/* OUTPUT= Enter number of students: 3
Enter details of student 1:
Roll Number: 13
Name: Yatin
Fee: 25000
Date of birth(DD/MM/YYYY): 04/09/2003

Enter details of student 2:
Roll Number: 4
Name: Avi
Fee: 15000
Date of birth(DD/MM/YYYY): 05/05/2002

Enter details of student 3:
Roll Number: 7
Name: Jasmine
Fee: 35000
Date of birth(DD/MM/YYYY): 02/12/2001

Students details in Ascending order of roll number:
-------------------------------------------------------------------
Roll            Name             Fee                DOB
-------------------------------------------------------------------
4               Avi              15000              05/05/2002
7               Jasmine          35000              02/12/2001
13              Yatin            25000              04/09/2003

*/