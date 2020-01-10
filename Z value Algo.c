#include<stdio.h>
#include<string.h>
int main()
{
 char str[50],pat[50],p[50],pt[50];
 scanf("\n%[^\n]",str);
 scanf("\n%[^\n]",pat);
 printf("%s\n",str);
  printf("%s\n",pat);
 strcpy(pt,str);
 strcpy(p,pat);
 strcat(pat,"$");
 strcat(pat,str);
 printf("%s\n",pat);
 int i,j,r=1,l=1;
 int *z=(int*)malloc(sizeof(int)*strlen(pat));
 z[0]=0;
 for(i=1;i<strlen(pat);i++)
 {
   if(i>=r)
   {
       l=r=i;
       while(pat[r]==pat[r-l])
       {
          r++;
       }
       z[i]=r-l;
   }
   else
   {
       if(z[i-l]+i<r)
        z[i]=z[i-l];
       else{
        l=i;
        if(i>=r)
      {
        l=r=i;
       while(pat[r]==pat[r-l])
       {
          r++;
       }
       z[i]=r-l;
      }
   }
 }}
 for(i=0;i<strlen(pat);i++)
    printf("%d",z[i]);
for(i=0;i<strlen(pat);i++)
{
  if(z[i]==strlen(p))
  {
    printf("\nLocation of %s in %s is : %d",p,pt,(i-1-strlen(p)));
  }
}
 return 0;
}
