#include<stdio.h>
#include<string.h>
int main()
{
char str1[50],str2[50];
scanf("\n%[^\n]",str1);
scanf("\n%[^\n]",str2);
int i,j;
for(i=0;i<strlen(str1);i++)
{
for(j=0;j<strlen(str2);j++)
{
  if(str1[i+j]!=str2[j])
  {
      break;
  }
}
if(j==strlen(str2))
{
 printf("Location of pattern is found at : %d",i);
 break;
}
}
if(j!=strlen(str2))
    printf("-1");
return 0;
}
