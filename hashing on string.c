#include<stdio.h>
int main()
{
char str[50],str1[50];
int i=0,arr[50]={0};
gets(str);
while(str[i]!='\0')
{
arr[str[i]-97]++;
i++;
}
for(int i=0;i<26;i++){
if(arr[i]>0){
printf("%c",i+97);
} }
return 0;
}
