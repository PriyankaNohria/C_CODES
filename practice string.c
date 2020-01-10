#include<stdio.h>
#include<string.h>
int main()
{
char str1[50][50],str2[50][50],str3[50][50];
int n1,n2,n3;
printf("no. of elements in 1 array : ");
scanf("%d",&n1);
for(int i=0;i<n1;i++)
{
fflush(stdin);
gets(str1[i]);
}
printf("no. of elements in 2 array : ");
scanf("%d",&n2);
for(int i=0;i<n2;i++)
{
fflush(stdin);
gets(str2[i]);
}
printf("no. of elements in 3 array : ");
scanf("%d",&n3);
for(int i=0;i<n3;i++)
{
fflush(stdin);
gets(str3[i]);
}
for(int i=0;i<n1;i++){
puts(str1[i]);}
return 0;
}
