//ascending & descending order of linked list 
#include<stdio.h>
#include<stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
};struct Node *head=NULL, *tail=NULL;
void create()
{
	int i,n;
	struct Node *temp;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp=(struct Node*)malloc(sizeof(struct Node));
		printf("Enter Data: ");
		scanf("%d", &temp->data);
		temp->next= NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
		tail->next=temp;
		tail=temp;}
	}
}
void view()
{
	struct Node *q;
	printf("Data: ");
	q=head;
	while(q!=NULL)
	{
		printf("%d ",q->data);
		q=q->next;
	}
}

void assrt()
{
	struct Node *a=head, *b=NULL;
	int temp;
	if(head==NULL)
	return;
	else
	while(a!=NULL)
	{
	b=a->next;
	while(b!=NULL)
{
	if(a->data>b->data)
	{
	temp=a->data;
	a->data=b->data;
	b->data=temp;
}
    b=b->next;
	  }
    a=a->next;
}
}

void desrt()
{
	struct Node *a=head, *b=NULL;
	int temp;
	if(head==NULL)
	return;
	else
	while(a!=NULL)
	{
	b=a->next;
	while(b!=NULL)
{
	if(a->data<b->data)
	{
	temp=a->data;
	a->data=b->data;
	b->data=temp;
}
    b=b->next;
	  }
    a=a->next;
}
}

int main()
{
	int ch;
	while(1)
	{
	printf("\nPress 1 to create, 2 to view, 3 for exit, 4 to sort in assending order, 5 to sort in desending order: ");
	scanf("%d",&ch);
	if(ch==1)
	create();
	else if(ch==2)
	view();
	else if(ch==3)
	break;
	else if(ch==4)
	assrt();
	else if(ch==5)
	desrt();
    }
}
