// Insertion in doubly linked list at beginning
#include<stdio.h>  
#include<stdlib.h>  
void insertbeginning(int);  
struct node  
{  
    int data;  
    struct node *next;  
    struct node *prev;  
};  
struct node *head;  
void main ()  
{  
    int choice,item;  
    do   
    {  
        printf("\nEnter the item which you want to insert?\n");  
        scanf("%d",&item);  
        insertbeginning(item);  
        printf("\nPress 0 to insert more ?\n");  
        scanf("%d",&choice);  
    }while(choice == 0);  
}  
void insertbeginning(int item)  
{  
   
   struct node *ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
      
      
   if(head==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       head=ptr;  
   }  
   else   
   {  
       ptr->data=item;  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
   }  
}  
 }
