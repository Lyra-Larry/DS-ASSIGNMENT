//Doubly linked list implementation
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
void create();
void view();
void insert();
void delete();
struct node
{
    int data;
    struct node* next,*prev;
};
struct node *head=NULL,*tail;
int main()
{
	int ch;
	while(1)
	{
	
	printf("enter 1 to create\n"); 
	printf("enter 2 to view\n");
	printf("enter 3 to delete\n");
	printf("enter 4 to insert\n");
	scanf("%d",&ch);
	if(ch==1)
	create();
	else if(ch==2)
	view();
	else if(ch==3)
	delete();
	else if(ch==4)
	insert();
	else
	break;
}
	return 0;
}
void create()
{
	int n,i;
	struct node *temp;
	printf("enter number of nodes to be created\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter data\n");
		scanf("%d",&temp->data);
		temp->next=temp->prev=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else{
			tail->next=temp;
			temp->prev=tail;
			tail=temp;
		}
	}
	view();
}
void view()
{ 

struct node *trav;
trav=head;
printf("data in doubly linked list is");
while(trav!=NULL)
{
	printf("%d\n",trav->data);
	trav=trav->next;
}
}
void insert()
{
	create();
	struct node *trav,*temp;
	int item;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter data to be insrted");
scanf("%d",&temp->data);
temp->next=temp->prev=NULL;
printf("enter the node after which you want to insert");
scanf("%d",&item);
trav=head;
while(trav->data!=item)
{
trav=trav->next;
temp->prev=trav;
temp->next=trav->next;
trav->next->prev=temp;
trav->next=temp;
if(trav==tail)
tail=temp;
}
}
void delete()
{
	create();
	struct node *trav,*temp;
	int item;
	printf("enter data to be deleted");
scanf("%d",&temp->data);
temp->next=temp->prev=NULL;
printf("enter the node after which you want to delete");
scanf("%d",&item);
trav=head;
while(trav->data!=item)
{
trav->prev->next=trav->next;
trav->next->prev=trav->prev;
free(trav);
}

}
