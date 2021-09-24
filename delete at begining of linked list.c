//delete a node at the begining of a linked list
#include <stdio.h>
#include <stdlib.h>

// Creating node with data and a pointer
struct node {
 int data;
 struct node *next;
}*head;
void createList(int n);
void deletion_beginning();
void displayList();

int main()
{
 int n, data, pos;
 printf("\nEnter the total number of nodes: ");
 scanf("%d", &n);
 if(n == 0)
 {
 printf("Empty List\n");
 exit(0);
 }
 else
 {
 createList(n);
 }
printf("\nThe List is \n");
 displayList();
 deletion_beginning();
 printf("\n\nAfter Deleting the first node, the List is\n");
 displayList();
 return 0;
}

void createList(int n)
{
 struct node *newNode, *temp;
 int data, i;
head = (struct node *)malloc(sizeof(struct node));
 // When the list is empty
 if(head == NULL)
 {
 printf("Unable to allocate memory.");
 }
 else
 {
 printf("\nEnter the data of node 1: ");
 scanf("%d", &data);
 head->data = data;
 head->next = NULL;
 temp = head;
 for(i=2; i<=n; i++)
 {
 newNode = (struct node *)malloc(sizeof(struct node));
 if(newNode == NULL)
 {
 printf("Unable to allocate memory.");
 break;
 }
 else
 {
 printf("\nEnter the data of node %d: ", i);
 scanf("%d", &data);
 newNode->data = data;
 newNode->next = NULL;
 temp->next = newNode;
 temp = temp->next;
 }
 }
 }
}

/* Function to delete the first node */
void deletion_beginning()
{ 
 // Empty List
 if(head == NULL) 
 printf("\n The list is Empty\n"); 
 struct node *temp;
 temp = head; //Make temp as head node
 head = head -> next; // Shift the head node
 free(temp); // Delete the temporary node
}
void displayList()
{
 struct node *temp;
 if(head == NULL)
 {
 printf("List is empty.");
 }
 else
 {
 temp = head;
// Print the list
 while(temp != NULL)
 {
 printf("%d\t", temp->data);
 temp = temp->next;
 }
 printf("\n");
 }
}
