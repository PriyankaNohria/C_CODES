#include<stdio.h>
#include<string.h>
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
char str[50];
scanf("\n%[^\n]",str);
printf("%s\n",str);
char s[50];
int i=0,j=0;
s[j++]='$';
while(str[i]!='\0')
{
 s[j++]=str[i];
 s[j++]='$';
 i++;
}
s[j]='\0';
printf("%s\n",s);
int left=0,right=0;
int l=strlen(s);
int *arr=(int*)malloc(l*sizeof(int));
for(i=0;i<l;i++)
{
  left=i;
  right=i;
  while(left>0&&right<l-1&&s[left-1]==s[right+1])
  {
      left--;
      right++;
  }
  arr[i]=right-left+1;

  for(j=i+1;j<=right;j++)
  {
      int x=arr[i-(j-i)];
    arr[j]=min(x,(right-j)*2+1);
    if((x/2)+i==right)
    {
        i=j;
        break;
    }
  }
}
for(i=0;i<l;i++)
    printf("%d",arr[i]);
    int max=0;
for(i=0;i<l;i++)
{
 if(max<arr[i])
        max=arr[i];
}
 printf("\nLongest palindrome String Length : %d",max/2);
return 0;
}
