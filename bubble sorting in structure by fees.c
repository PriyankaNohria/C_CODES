#include<stdio.h>
struct employ_intformation
{
char name[50];
char depart[50];
float salary;
}EMP[50],temp;
int main()
{
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("information of Employ %d\n",i+1);
printf("Name of employ %d : ",i+1);
scanf("\n%[^\n]",EMP[i].name);
printf("Department of employ %d : ",i+1);
scanf("\n%[^\n]",EMP[i].depart);
printf("salary of employ %d : ",i+1);
scanf("%f",&EMP[i].salary);
}
//struct employ_information temp;
for(int i=0;i<n-1;i++)
{
for(int j=0;j<(n-i)-1;j++)
{
if(EMP[j].salary>EMP[j+1].salary){
temp=EMP[j];
EMP[j]=EMP[j+1];
EMP[j+1]=temp;
}
}
}
for(int i=0;i<n;i++)
{
printf("Information of employ %d\n",i+1);
printf("%s\n",EMP[i].name);
printf("%s\n",EMP[i].depart);
printf("%f\n",EMP[i].salary);
}
return 0;
}
