#include<stdio.h>
#include<string.h>
int main()
{
char str1[50],str2[50];
//scanf("\n%[^\n]",&str1);
scanf("\n%[^\n]",&str2);
int i,j=0;
int lps[50]={0};
for(i=1;i<strlen(str2);)
{
 if(str2[i]==str2[j])
 {
     lps[i]=j+1;
     j++;
     i++;
 }
 else
 {
    if(j==0)
    {
    lps[i]=0;
    i++;
    }
    else
        j=lps[j-1];
 }
}
 for(i=0;i<strlen(str2);i++)
 {
     printf("%d",lps[i]);
 }
return 0;
}
