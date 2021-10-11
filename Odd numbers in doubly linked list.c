// Display Odd numbers in a doubly linked list
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void create();
void view();
struct node
{
    int data;
    struct node* next,*prev;
};
struct node *head=NULL,*tail;
int main()
{
create();
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
		 if(temp->data%2!=0)
		 {
		 
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
	}
	view();
}
void view()
{ 

struct node *trav;
trav=head;
printf("data in doubly linked list is\n");
while(trav!=NULL)
{
	printf("%d\n",trav->data);
	trav=trav->next;
}
}
