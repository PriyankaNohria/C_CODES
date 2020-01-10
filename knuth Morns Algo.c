#include<stdio.h>
#include<string.h>
int main()
{
char str1[50],str2[50];
scanf("\n%[^\n]",str1);
scanf("\n%[^\n]",str2);
int j=0,i;
int lps[50]={0};
for(i=1;i<strlen(str2);)
{
 if(str2[j]==str2[i])
 {
   lps[i]=j+1;
   i++;
   j++;
 }
 else
 {
     if(j==0)
     {
       lps[i]=0;
       i++;
     }
     else
     {
         j=lps[j-1];
     }
 }
}
printf("Pie Chart : ");
for(i=0;i<strlen(str2);i++)
    printf("%d",lps[i]);
    j=0;
for(i=0;i<strlen(str1);)
{
    if(str1[i]==str2[j])
    {
        i++;
        j++;
    }
    else
    {
        if(j==0)
            i++;
        else
          j=lps[j-1];
    }
if(j==strlen(str2)){
printf("\npattern is found At : %d",i-j);
break;}
}
if(j!=strlen(str2)){
printf("\n-1");}
return 0;
}
