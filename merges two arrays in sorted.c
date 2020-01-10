#include<stdio.h>
int main()
{
int a1[50],a2[50],a3[50],n1,n2,i=0,j=0,k=0;
scanf("%d",&n1);
for(int i=0;i<n1;i++){
scanf("%d",&a1[i]);
}
scanf("%d",&n2);
for(int i=0;i<n2;i++){
scanf("%d",&a2[i]);
}
while(i<n1&&j<n2){
if(a1[i]<a2[j]){
a3[k]=a1[i];
i++;
}
else {
a3[k]=a2[j];
j++;
}
k++;
}
int m=n1+n2;
for(int i=0;i<m;i++){
printf("%d\n",a3[i]);
}
return 0;
}
