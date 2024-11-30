#include <stdio.h>
#include<stdlib.h>
struct node{
    int d;
    struct node*next;
    struct node*before;
};
struct node*cree(int vall){
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if (newnode==NULL){
    printf(" Memory allocation failed! \n");
    exit(1);
}

newnode->d=vall;
newnode->next=0;
newnode->before=0;
return newnode;
}
int main(){
      struct node *head = NULL, *sec = NULL, *thi = NULL;
      int vall;
      printf("Enter the first node: \n");
      scanf("%d",&vall);
      head=cree(vall);
      printf("Enter data for the second node: ");
      scanf("%d", &vall);
      sec = cree(vall);

      printf("Enter data for the third node: ");
      scanf("%d", &vall);
      thi = cree(vall);
      head->next=sec;
      sec->before=head;
      sec->next=thi;
      thi->before=sec;
      printf("Doubly Linked List (Forward Traversal):\n");
      struct node*temp=head;
      while(temp!=0){
          printf("%d\n",temp->d);
          temp=temp->next;
      }
      printf("NULL\n");
      printf("Doubly Linked List (Backward Traversal):\n");
      temp=thi;
      while(temp!=NULL){
          printf("%d\n",temp->d);
          temp=temp->before;
      }
      printf("NULL\n");
      return 0;
}