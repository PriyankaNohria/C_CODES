#include<stdio.h>
struct node
{
int val;
struct node *next;
};
struct node* memory()
{
struct node *n=(struct node*)malloc(sizeof(struct node));
return (n);
}
void insert(struct node** head,int d)
{
struct node *temp,*t;
temp=memory();
temp->val=d;
temp->next=*head;
*head=temp;
}
void view(struct node *p)
{
if(p==NULL)
{
printf("Empty");
}
else
{
while(p!=NULL)
{
 printf("%d ",p->val);
 p=p->next;
}
}
}
int main()
{
struct node* head=NULL;
insert(&head,3);
insert(&head,4);
insert(&head,5);
view(head);
return 0;
}
