#include<stdio.h>
struct student_record
{
char name[50];
}
stud1,stud2;
int main()
{
printf("name of 1 student : ");
scanf("\n%[^\n]",stud1.name);
printf("name of 2 student : ");
scanf("\n%[^\n]",stud2.name);
int i=0,count=0;
while(stud1.name[i]!='\0'){
if(stud1.name[i]=='A'||stud1.name[i]=='a'||stud1.name[i]=='E'||stud1.name[i]=='e'||stud1.name[i]=='I'||stud1.name[i]=='i'||stud1.name[i]=='O'||stud1.name[i]=='o'||stud1.name[i]=='U'||stud1.name[i]=='u')
count++;
i++;
}
i=0;
int count1=0;
while(stud2.name[i]!='\0'){
if(stud2.name[i]=='A'||stud2.name[i]=='a'||stud2.name[i]=='E'||stud2.name[i]=='e'||stud2.name[i]=='I'||stud2.name[i]=='i'||stud2.name[i]=='O'||stud2.name[i]=='o'||stud2.name[i]=='U'||stud2.name[i]=='u')
count1++;
i++;
}
if(count>count1) {
printf("%s",stud1.name);
}
else {
printf("%s",stud2.name);
}
return 0;
}
