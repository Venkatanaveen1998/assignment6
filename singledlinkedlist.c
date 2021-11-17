#include <stdio.h>
#include<stdlib.h>
struct element
{
    int data;
    struct element *link;
};
struct element *enter(struct element *head,int value)
{
  struct element *newnode=NULL,*temp=NULL;
  newnode=calloc(1,sizeof(struct element));
  if(newnode==NULL) {printf("no node created"); }
  else
  {
      newnode->data=value;
      if(head==NULL)
      {
          head=newnode;
          newnode->link=NULL;
      }
      else
      {
          for(temp=head;temp->link!=NULL;temp=temp->link);
          newnode->link=NULL;
          temp->link=newnode;
      }
  }
  return head;
}
void display(struct element *head)
{
    struct element *temp=NULL;
    for(temp=head;;temp=temp->link)
    printf("%d \n",temp->data);
}
int main()
{
   struct element *head=NULL,*face=NULL;
   head=enter(head,100);
   head=enter(head,200);
   head=enter(head,300);
   display(head);
}

