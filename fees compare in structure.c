#include<stdio.h>
struct student_record
{
char name[50];
int age;
float fees;
char address[50];
}
stud1,stud2;
int main()
{
printf("record of stud1\n");
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
if(stud1.fees==stud2.fees){
printf("both students pay same fees");
}
else if(stud1>stud2){
printf("student 1 pay more fees than student 2");
}
else{
printf("student 2 pay more fees than student 1");
}
}
