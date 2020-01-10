#include<stdio.h>
#include<string.h>
int main()
{
char str[50],p[50],pt[50];
scanf("\n%[^\n]",str);
scanf("\n%[^\n]",pt);
strcpy(p,pt);
strcat(pt,"$");
strcat(pt,str);
printf("%s\n",pt);
int *z=(int*)malloc(strlen(pt)*sizeof(int));
z[0]=0;
int i,j,l=1,r=1;
for(i=1;i<strlen(pt);i++)
{
 if(i>=r)
 {
  l=r=i;
  while(pt[r]==pt[r-l])
  {
      r++;
  }
  z[i]=r-l;
 }
 else
 {
   if(z[i-l]+i<r)
     z[i]=z[i-l];
   else
   {
    l=i;
    if(i>=r)
    {
     l=r=i;
     while(pt[r]==pt[r-l])
            r++;
     z[i]=r-l;
    }
   }
 }
}
for(i=0;i<strlen(pt);i++)
{
 printf("%d",z[i]);
}
printf("\n");
for(i=0;i<strlen(pt);i++)
{
  if(z[i]==strlen(p))
  printf("Pattern exists at %d",i-1-strlen(p));
}
return 0;
}
