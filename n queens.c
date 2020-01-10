#include<stdio.h>
#include<stdbool.h>
bool isSafe(int board[10][10],int i,int j,int n)
{
    int row;
 for(row=0;row<i;row++)
 {
   if(board[row][j]==1)
        return false;
 }
 int x=i;
 int y=j;
 while(x>=0&&y>=0)
 {
  if(board[x][y]==1)
        return false;
  x--;
  y--;
 }
 x=i;
 y=j;
 while(x>=0&&y<n)
 {
  if(board[x][y]==1)
        return false;
  x--;
  y++;
 }
 return true;
}
bool solveNqueen(int board[][10],int i,int n)
{
    int j;
  if(i==n)
  {
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        if(board[i][j]==1)
         printf("Q ");
        else
         printf("- ");
      }
      printf("\n");
    }
    printf("*****************************\n");
    return false;
  }
  for(j=0;j<n;j++)
  {
   if(isSafe(board,i,j,n))
   {
    board[i][j]=1;
    bool nextQueenRakhPaye=solveNqueen(board,i+1,n);
    if(nextQueenRakhPaye)
        {
        return true;
        }
        board[i][j]=0;//BackTracking
   }
  }
  return false;
}
int main()
{
 int board[10][10]={0},n;
 scanf("%d",&n);
 solveNqueen(board,0,n);
 return 0;
}
