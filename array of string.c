#include<stdio.h>
#include<string.h>
int main()
{
char name_[35][20],temp[20];
int size;
scanf("%d",&size);
for(int i=0;i<size;i++)
{
fflush(stdin);
gets(name_[i]);
}
printf("before sorting : \n");
for(int i=0;i<size;i++)
{
puts(name_[i]);
}
printf("after bubble sorting : \n");
for(int i=0;i<size-1;i++)
{
for(int j=0;j<(size-i)-1;j++)
{
if(strcmp(name_[j],name_[j+1])>0){
 strcpy(temp,name_[j]);
 strcpy(name_[j],name_[j+1]);
 strcpy(name_[j+1],temp);}
}}
for(int i=0;i<size;i++){
puts(name_[i]);
}

return 0;
}
