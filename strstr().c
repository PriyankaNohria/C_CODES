#include<stdio.h>
int length(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return 0;
}
char* strstr(char *str1,char *str2)
{
    int i,j,flag=0;
 int l=length(str1);
 int k=length(str2);
 for(i=0;i<l-k;i++)
 {
  for(j=0;j<k;j++)
  {
     if(str1[i+j]==str2[j])
        continue;
     else
     {
         flag=1;
         break;
     }
  }
  if(flag==0)
    return str1+k;
 }
}
int main()
{
    int count=0;
    char *str1=(char*)malloc(sizeof(char)*10);
    char *str2=(char*)malloc(sizeof(char)*10);
    scanf("\n%[^\n]",str1);
    scanf("\n%[^\n]",str2);
    char *curr=(char*)malloc(sizeof(char)*10);
    curr=str1;
    while(curr!='\0')
    {
        curr=strstr(curr,str2);
        if(curr!='\0')
        {
          count++;
        }
        curr=curr+strlen(str2);
    }
    printf("%d",count);
    return 0;
}
