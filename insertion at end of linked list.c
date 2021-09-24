//insertion at end of linked list
#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void insertStart(struct Node** head, int data){

  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

  newNode->data = data;
  newNode->next = *head;

  //changing the new head to this freshly entered node
  *head = newNode;
}

void insertLast(struct Node** head, int data){

  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

  newNode->data = data;
  newNode->next = NULL;

  //need this if there is no node present in linked list at all
  if(*head==NULL){
    *head = newNode;
    return;
  }

  struct Node* temp = *head;

  while(temp->next!=NULL)
    temp = temp->next;

  temp->next = newNode;
}

void display(struct Node* node){

  //as linked list will end when Node is Null
  while(node!=NULL){
    printf("%d ",node->data);
    node = node->next;
  }
  printf("\n");
}

int main()
{
  struct Node* head = NULL;

  /*Need & i.e. address as we
  need to change head address only needs to traverse
  and access items temporarily
  */
  insertStart(&head,12);
  insertStart(&head,16);
  insertStart(&head,20);

  insertLast(&head,10);
  insertLast(&head,14);
  insertLast(&head,18);
  insertLast(&head,11);

  /*No need for & i.e. address as we do not
  need to change head address
  */
  display(head); 
  return 0; 
}

