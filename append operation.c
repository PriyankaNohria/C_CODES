#include<stdio.h>
int main()
{
char str1[50],str2[50];
int l=0,i=0;
scanf("%s",str1);
scanf("%s",str2);
while(str1[l]!='\0')
{
l++;
}
while(str2[i]!='\0')
{
str1[l]=str2[i];
i++;
l++;
}
str1[l]='\0';
puts(str1);
return 0;
}
