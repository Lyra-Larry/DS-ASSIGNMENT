//inserting a node at begining in linked list
#include<stdio.h>
#include<stdlib.h>

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

void display(struct Node* node){

  //as linked list will end when Node is Null
  while(node!=NULL)
  {
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


  /*No need for & i.e. address as we do not
  need to change head address
  */
 display(head); 
 return 0; 
}
