#include <stdio.h>
void subarray(int* A,int n)
{
  int B[n],C[n];
  int i;
  for(i=0;i<n;i++)
  {
      if(A[i]>0)
      C[i]=1;
      else
      C[i]=0;
  }
  B[n-1]=1;
  i=n-2;

  while(i>=0)
  {
    if(C[i]!=C[i+1])
    B[i]=B[i+1]+1;
    else
    B[i]=1;
    i--;
  }
  for(i=0;i<n;i++)
  printf("%d ",B[i]);
  printf("\n");
}
int main(void) {
	int t,n,i;
	scanf("%d",&t);
	int k;
	for(k=0;k<t;k++){
	scanf("%d",&n);
	int *a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	subarray(a,n);
	}
	return 0;
}

