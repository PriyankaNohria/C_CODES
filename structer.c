#include<stdio.h>
struct student_record
{
char name[20];
int age;
char address[50];
float fees;
}
stud1,stud2;
int main()
{
printf("record of 1 student\n");
printf("name of student 1 : ");
scanf("\n%[^\n]",stud1.name);
printf("age of student 1 : ");
scanf("%d",&stud1.age);
printf("address of student 1 : ");
scanf("\n%[^\n]",stud1.address);
printf("fees of student 1 : ");
scanf("%f",&stud1.fees);
printf("record of 2 student\n");
printf("name of student 2 : ");
scanf("\n%[^\n]",stud2.name);
printf("age of student 2 : ");
scanf("%d",&stud2.age);
printf("address of student 2 : ");
scanf("\n%[^\n]",stud2.address);
printf("fees of student 2 : ");
scanf("%f",&stud2.fees);
return 0;
}
