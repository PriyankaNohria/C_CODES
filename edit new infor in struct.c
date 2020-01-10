#include<stdio.h>
#include<string.h>
struct student_information
{
int rollno;
char name[50];
int fees;
}stud[50];
int main()
{
int n,rollno;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
printf("Information of student %d\n",i);
scanf("%d",&stud[i].rollno);
scanf("\n%[^\n]",stud[i].name);
scanf("%d",&stud[i].fees);
}
int newrollno,new_fees;
char new_name[50];
printf("Enter the student roll no. has to be edited : ");
scanf("%d",&rollno);
scanf("%d",&newrollno);
scanf("\n%[^\n]",new_name);
scanf("%d",&new_fees);
stud[rollno].rollno=newrollno;
strcpy(stud[rollno].name,new_name);
stud[rollno].fees=newrollno;
printf("After editing : \n");
printf("%d\n",stud[rollno].rollno);
printf("%s\n",stud[rollno].name);
printf("%d\n",stud[rollno].fees);
return 0;
}
