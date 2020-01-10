#include<stdio.h>
struct employ_information
{
char name[50];
char department[50];
float salary;
}EMP[50],temp;
int main()
{
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("information of employ %d\n",i+1);
printf("name : ");
scanf("\n%[^\n]",EMP[i].name);
printf("department : ");
scanf("\n%[^\n]",EMP[i].department);
printf("salary : ");
scanf("%f",&EMP[i].salary);
}
for(int i=0;i<n-1;i++)
{
for(int j=0;j<(n-i)-1;j++)
{
if(strcmp(EMP[j].name,EMP[j+1].name)>0)
{
temp=EMP[j];
EMP[j]=EMP[j+1];
EMP[j+1]=temp;
}
}
}
for(int i=0;i<n;i++)
{
printf("%s\n",EMP[i].name);
printf("%s\n",EMP[i].department);
printf("%f\n",EMP[i].salary);
}
return 0;
}
