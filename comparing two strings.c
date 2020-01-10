#include<stdio.h>
char str_len1(char str1[]);
char str_len2(char str2[]);
int main()
{
char str1[50],str2[50];
int l1,l2,i=0,flag=0;
scanf("%s",str1);
scanf("%s",str2);
l1=str_len1(str1);
l2=str_len2(str2);
if(l1==l2)  {
while(str1[i]!=str2[i])
{
if(str1[i]!=str2[i]) {
flag=1;
break;
}
i++;
}
if(flag==1)  {
printf("Not Same");
}
else {
printf("Same");
} }
else {
printf("String Length is not same");
}
return 0;
}
char str_len1(char*str1)
{
int i=0;
while(str1[i]!='\0')
{
i++;
}
return i;
}
char str_len2(char*str2)
{
int j=0;
while(str2[j]!='\0')
{
j++;
}
return j;
}
