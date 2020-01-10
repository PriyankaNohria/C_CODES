#include<stdio.h>
char** split(char arr[100],int n)
{
    int start=0,end=0,i,c=0;
  char **res=(char**)malloc(sizeof(char*)*n);
  for(i=0;i<n;i++)
    res[i]=(char*)malloc(sizeof(char)*50);
  while(1)
  {
    while(arr[end]!=' '&&arr[end]!='\0')
    {
        end++;
    }
    res[c++]=start+arr;
    if(arr[end]=='\0')
        break;
    arr[end]='\0';
    start=end+1;
    end=start;
  }
  return res;
}
int main()
{
char str[100];
scanf("\n%[^\n]",str);
int i=0,c=1;
while(str[i]!='\0')
{
  if(str[i]==' '&&str[i+1]!=' ')
   c++;
    i++;

}
char **res=(char**)malloc(sizeof(char*)*c);
char **res1=(char**)malloc(sizeof(char*)*c);
res=split(str,c);
for(i=0;i<c;i++)
 printf("%s ",res[i]);
 int j=0;
 printf("\nReverse the words of string\n");
for(i=c-1;i>=0;i--)
{
 res1[j++]=res[i];
}
for(i=0;i<c;i++)
 printf("%s ",res1[i]);
return 0;
}
