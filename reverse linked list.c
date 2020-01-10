#include<stdio.h>
struct node
{
int x;
struct node *next;
};
struct node *start=NULL;
struct node* createNode()
{
 struct node *n=(struct node*)malloc(sizeof(struct node));
return (n);
}
void insert()
{
struct node *t,*temp;
temp=createNode();
scanf("%d",&temp->x);
 temp->next=NULL;
 if(start==NULL)
 {
  start=temp;
 }
 else
 {
  t=start;
  while(t->next!=NULL)
  {
    t=t->next;
  }
  t->next=temp;
 }
}
void viewList()
{
 struct node *t;
 if(start==NULL)
        printf("List is Empty\n");
 else
 {
  t=start;
  while(t!=NULL){
  printf("%d ",t->x);
  t=t->next;
  }
  printf("\n");
 }
}
void viewList1(struct node *t)
{
 if(t==NULL)
        printf("List is Empty\n");
 else
 {
  while(t!=NULL){
  printf("%d ",t->x);
  t=t->next;
  }
  printf("\n");
 }
}
struct node* reverse()
{
struct node *pre=NULL;
struct node *curr=NULL;
while(start!=NULL)
{
 curr=start->next;
 start->next=pre;
 pre=start;
 start=curr;
}
return pre;
}
int main()
{
    int n,i;
    scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 insert();
 }

 viewList();
 struct node *p=reverse();
 viewList1(p);
return 0;
}
