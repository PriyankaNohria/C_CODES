#include<stdio.h>
int length(char *ch)
{
    int i=0;
    while(ch[i]!='\0')
    {
        i++;
    }
    return i;
}
char* strcopy(char *ch)
{
    int i=0;
  int l=length(ch);
 char *str=(int*)malloc(sizeof(int)*l);
 while(ch[i])
 {
   str[i]=ch[i];
   i++;
 }
 str[i]='\0';
 return str;
}
char* strcat(char *ch1,char *ch2)
{
  int i=0,j=0;
  int l=length(ch1);
  char *str=(char*)malloc(sizeof(char)*(l+length(ch2)));
  while(ch1[i]!='\0')
  {
    str[j]=ch1[i];
    j++;
    i++;
  }
  i=0;
  while(ch2[i]!='\0')
  {
    str[j]=ch2[i];
    j++;
    i++;
  }
  str[j]='\0';
  return str;
}
char* reverse(char *str)
{
    int i=0;
    int l=length(str);
    char *ch=(char*)malloc(sizeof(char)*l);
    l=l-1;
    while(l>=0)
    {
       ch[i]=str[l];
       i++;
       l--;
    }
    ch[i]='\0';
    return ch;
}
int compare(char *str1,char *str2)
{
    int i=0;
        while(str1[i]!='\0'&&str2[i]!='\0')
        {
            if(str1[i]==str2[i])
            {
                i++;
                continue;
            }
                return str1[i]-str2[i];
        }
    if(str1[i]!='\0')
        return 1;
    else if(str2[i]!='\0')
        return -1;
    else
        return 0;
}
int strchr(char *str,char ch)
{
    int i=0;
    while(str[i]!='\0')
    {
       if(str[i]==ch){
          return i;
       }
       i++;
    }
    return -1;
}
int main()
{
char *str1=(char*)malloc(sizeof(char)*10);
char *str2=(char*)malloc(sizeof(char)*10);
scanf("\n%[^\n]",str1);
scanf("\n%[^\n]",str2);
int l1=length(str1);
int l2=length(str2);
char *str3=(char*)malloc(sizeof(char)*l1);
str3=strcopy(str1);
printf("Length of %s is %d\n",str1,l1);
printf("Length of %s is %d\n",str2,l2);
printf("str3 : %s\n",str3);
printf("concat str1 and str2 : %s\n",strcat(str1,str2));
printf("String str3 reverse : %s\n",reverse(str3));
printf("str1 and str2 is equal or not : %d\n",compare(str1,str2));
printf("e in %s is at : %d",str3,strchr(str3,'e'));
return 0;
}
