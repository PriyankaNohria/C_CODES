#include<stdio.h>
int main()
{
char str[500][500];
int size,count=0,a[50]={0};
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%s",&str[i]);
}
for(int i=0;i<size;i++)
{
if(str[i]==0){
i++;}
for(int j=i+1;j<size;j++)
{
if(strcmp(str[i],str[j])==0){
count++;
str[j]=' ';
}
a[i]=count;
count=0;
}
}
for(int i=0;i<size;i++)
{
    if(str[i]!=' '){
printf("the frequency of %s is %d\n",str[i],a[i]);
}}
return 0;
}
