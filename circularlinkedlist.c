#include <stdio.h>
#include<stdlib.h>
struct element
{
    char data;
    struct element *link;
};
struct element *enter(struct element *head,char value)
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
          head->link=head;
      }
      else
      {
          for(temp=head;temp->link!=head;temp=temp->link);
         newnode->link=head;
          temp->link=newnode;
      }
  }
  return head;
}
void display(struct element *head)
{
    struct element *temp=NULL;
    for(temp=head;;temp=temp->link)
    {
    printf("%c \n",temp->data);
    if(temp->link==head) break;
    }
}
int main()
{
   struct element *head=NULL,*face=NULL;
   head=enter(head,'a');
   head=enter(head,'i');
   head=enter(head,'e');
   head=enter(head,'o');
   head=enter(head,'u');
   display(head);
}
