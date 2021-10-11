//Sorting of doubly linked list in ascending order
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void create();
void view();
void sorting();
struct node
{
    int data;
    struct node* next,*prev;
};
struct node *head=NULL,*tail;
int main()
{
create();
printf(" Before Sorting\n");
view();
sorting();
printf(" After Sorting\n");
view();
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
	void sorting()
	{
		struct node *ptr,*cptr;
		int temp;
		ptr=head;
		while(ptr->next!=NULL)
		{
			cptr=ptr->next;
			while(cptr!=NULL)
			{
				if(ptr->data>cptr->data)
				{
				temp=ptr->data;
				ptr->data=cptr->data;
				cptr->data=temp;	
				}
				cptr=cptr->next;
			}
			ptr=ptr->next;
	}
}
