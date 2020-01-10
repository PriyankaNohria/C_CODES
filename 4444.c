#include<stdio.h>
int main()
{
char str1[50],str2[50];
int n;
gets(str1);
scanf("%d",&n);
for(int i=0;i<n;i++)
{
str2[i]=str1[i];
}
str2[n]='\0';
puts(str2);
return 0;
}
