// Deleting all instances in doubly linkedlist
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
	create();
	view();
	delete();
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
void delete()

{
    struct node *temp;

    while(head != NULL)
    {
        temp = head;
        head = head->next;

        free(temp);
    }

    printf("SUCCESSFULLY DELETED ALL INSTANCES OF LINKED LIST\n");
}




