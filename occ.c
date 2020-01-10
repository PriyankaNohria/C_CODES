#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  char s[1000];
  scanf("\n%[^\n]",s);
  int a[100]={0},k=0,i=0,j;
   while(s[i]!='\0')
   {
     if(s[i]>=48&&s[i]<=57)
     {
       a[s[i]-48]++;
     }
     i++;
   }
   for(i=0;i<10;i++)
   {
    printf("%d ",a[i]);
   }
    return 0;
}
