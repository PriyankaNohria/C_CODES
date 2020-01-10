#include<stdio.h>
struct wrong
{
char name[50];
int rollno;
int marks;
}stud1,stud2;
int main()
{
printf("WRONG DATA\n");
printf("Enter the information of stud1 : \n");
printf("RollNo. : ");
scanf("%d",&stud1.rollno);
printf("name : ");
scanf("\n%[^\n]",stud1.name);
printf("Marks : ");
scanf("%d",&stud1.marks);
printf("Enter the information of stud2 : \n");
printf("RollNo. : ");
scanf("%d",&stud2.rollno);
printf("name : ");
scanf("\n%[^\n]",stud2.name);
printf("Marks : ");
scanf("%d",&stud2.marks);
printf("CORRECT DATA AFTER SWAPING\n");
 int temp;
 temp=stud1.rollno;
 stud1.rollno=stud2.rollno;
 stud2.rollno=temp;
 printf("student 1 : \n");
 printf("%d\n",stud1.rollno);
 printf("%s\n",stud1.name);
 printf("%d\n",stud1.marks);
 printf("student 2 : \n");
 printf("%d\n",stud2.rollno);
 printf("%s\n",stud2.name);
 printf("%d\n",stud2.marks);
 return 0;
}
