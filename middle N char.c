#include<stdio.h>
int main()
{
char str1[50],str2[50];
int n,j=0;
gets(str1);
scanf("%d",&n);
int len=strlen(str1);
for(int i=n;i<=len;i++)
{
str2[j]=str1[i];
j++;
}
str2[j]='\0';
puts(str2);
return 0;
}
