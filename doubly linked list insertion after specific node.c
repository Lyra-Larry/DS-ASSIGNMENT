//Insertion in doubly linked list after Specified node
#include<stdio.h>  
#include<stdlib.h>  
void insert_specified(int);  
void create(int);  
struct node  
{  
    int data;  
    struct node *next;  
    struct node *prev;  
};  
struct node *head;  
void main ()  
{  
    int choice,item,loc;  
    do   
    {  
        printf("\nEnter the item which you want to insert?\n");  
        scanf("%d",&item);  
        if(head == NULL)  
        {  
            create(item);  
        }  
        else  
        {  
            insert_specified(item);  
        }  
        printf("\nPress 0 to insert more ?\n");  
        scanf("%d",&choice);  
    }while(choice == 0);  
}  
void create(int item)  
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
       ptr->data=item;printf("\nPress 0 to insert more ?\n");  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
   }  
    printf("\nNode Inserted\n");  
}  
     
}  
void insert_specified(int item)  
{  
     
   struct node *ptr = (struct node *)malloc(sizeof(struct node));  
   struct node *temp;   
   int i, loc;   
   if(ptr == NULL)  
   {  
       printf("\n OVERFLOW");  
   }  
   else  
   {  
       printf("\nEnter the location\n");  
       scanf("%d",&loc);  
       temp=head;  
       for(i=0;i<loc;i++)  
       {  
           temp = temp->next;  
           if(temp == NULL)  
           {  
               printf("\ncan't insert\n");  
               return;  
           }  
       }  
       ptr->data = item;  
       ptr->next = temp->next;  
       ptr -> prev = temp;  
       temp->next = ptr;  
       temp->next->prev=ptr;  
       printf("Node Inserted\n");  
   }  
}  


