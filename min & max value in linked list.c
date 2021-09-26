//min ans max elements in linked list
#include <stdio.h>
#include<malloc.h>  
#include<conio.h>   
//Represent a node of the singly linked list  
struct node{  
    int data;  
    struct node *next;  
};      
   
//Represent the head and tail of the singly linked list  
struct node *head, *tail = NULL;  
   
//addNode() will add a new node to the list  
void addNode(int data) {  
    //Create a new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
      
    //Checks if the list is empty  
    if(head == NULL) {  
        //If list is empty, both head and tail will point to new node  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        //newNode will be added after tail such that tail's next will point to newNode  
        tail->next = newNode;  
        //newNode will become new tail of the list  
        tail = newNode;  
    }  
}  
   
//minNode() will find out the minimum value node in the list  
void minNode() {  
    struct node *current = head;  
    int min;  
      
    if(head == NULL) {  
        printf("List is empty \n");  
    }  
    else {  
        //Initializing min with head node data  
        min = head->data;  
          
        while(current != NULL){  
             //If current node's data is smaller than min  
             //Then, replace value of min with current node's data  
             if(min > current->data) {  
                 min = current->data;  
             }  
             current= current->next;  
        }          
        printf("Minimum value node in the list: %d\n", min);  
    }  
}  
      
//maxNode() will find out the maximum value node in the list  
void maxNode() {  
    struct node *current = head;  
    int max;  
      
    if(head == NULL) {  
        printf("List is empty \n");  
    }  
    else {  
        //Initializing max with head node data  
        max = head->data;  
          
        while(current != NULL){  
             //If current node's data is greater than max  
             //Then, replace value of max with current node's data  
             if(max < current->data) {  
                 max = current->data;  
             }  
             current = current->next;  
        }               
        printf("Maximum value node in the list: %d\n", max);  
    }  
}  
      
int main()  
{  
    //Adds data to the list  
    addNode(5);  
    addNode(8);  
    addNode(1);  
    addNode(6);  
   
    //Display the minimum value node in the list  
    minNode();  
      
    //Display the maximum value node in the list  
    maxNode();  
          
    return 0;  
}  

