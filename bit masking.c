#include<stdio.h>
#include<string.h>
void filter(char *str,int no)
{
 int i=0;
 while(no>0)
 {
   (no&1)?printf("%c",str[i]):"";
   i++;
   no=no>>1;
 }
 printf("\n");
}
void generate(char *str)
{
 int n=strlen(str);
 int i;
 int range=(1<<n)-1;
 for(i=0;i<=range;i++)
 {
   filter(str,i);
 }
}
int main()
{
 char str[50];
 scanf("\n%[^\n]",str);
 generate(str);
}
