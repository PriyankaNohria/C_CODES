#include<stdio.h>
#include<string.h>
int main()
{
char str[100],pat[100];
scanf("\n%[^\n]",str);
scanf("\n%[^\n]",pat);
int len=strlen(str);
int lp=strlen(pat);
strcat(pat,"$");
strcat(pat,str);
int i,l=1,r=1;
printf("%s\n",pat);
int *z=(int*)malloc(sizeof(int)*strlen(pat));
z[0]=0;
for(i=1;i<strlen(pat);i++)
{
 if(i>=r)
 {
   r=l=i;
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
     else
     {
      l=i;
      if(i>=r)
       {
   r=l=i;
   while(pat[r]==pat[r-l])
   {
     r++;
   }
   z[i]=r-l;
 }
}
 }
}
for(i=0;i<strlen(pat);i++)
printf("%d",z[i]);
printf("\n");
for(i=0;i<strlen(pat);i++)
{
 if(z[i]==lp)
  printf("Pattern is found at %d",(i-1-lp));
}

return 0;
}

