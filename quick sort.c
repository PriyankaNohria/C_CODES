#include<stdio.h>
void quick(int A[],int n,int beg,int end,int *loc)
{
int left,right,temp;
left=beg;
right=end;
*loc=beg;
step2:
    while(A[*loc]<=A[right]&&*loc!=right)
    {
        right--;
    }
    if(*loc==right)
        return;
    if(A[*loc]>A[right])
    {
        temp=A[*loc];
        A[*loc]=A[right];
        A[right]=temp;
        *loc=right;
    }
    goto step3;
    step3:
        while(A[left]<=A[*loc]&&*loc!=left)
            left++;
        if(*loc==left)
            return;
        if(A[left]>A[*loc])
        {
            temp=A[left];
            A[left]=A[*loc];
            A[*loc]=temp;
            *loc=left;
        }
        goto step2;
}
void quick_sort(int A[],int n)
{
int beg,end,i,loc;
int upper[10],lower[10],top=-1;
if(n>1)
{
top++;
lower[top]=0;
upper[top]=n-1;
}
while(top!=-1)
{
beg=lower[top];
end=upper[top];
top--;
quick(A,n,beg,end,&loc);
if(beg<loc-1)
{
top++;
lower[top]=beg;
upper[top]=loc-1;
}
if(loc+1<end)
{
top++;
lower[top]=loc+1;
upper[top]=end;
}
}
}
int main()
{
    int i;
int A[]={44,33,11,55,77,90,40,60,99,22,88,66};
quick_sort(A,12);
for(i=0;i<12;i++)
{
    printf("%d\t",A[i]);
}
return 0;
}
