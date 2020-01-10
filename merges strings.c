#include<stdio.h>
int main()
{
char str1[500],str2[500],str3[500];
scanf("\n%[^\n]",str1);
scanf("\n%[^\n]",str2);
int i=0,j=0,k=0;
while(str1[i]!='\0'&&str2[j]!='\0')
{
str3[k++]=str1[i];
str3[k++]=str2[j];
i++;
j++;
}
if(str1[i]=='\0'){
while(str2[j]!='\0')
{
str3[k++]=str2[j];
j++;
}}

str3[k]='\0';
puts(str3);
return 0;
}
