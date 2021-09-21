//create view and traverse
#include<stdio.h>
#include<malloc.h>
void create();
void view();
struct node
{
	int data;
	struct node *next ;
};
struct node *head= NULL, *tail= NULL;
int main()
{
	char c;
	printf("enetr 1 for create 2 for view and 3 for exit");
	scanf("%c",&c);
	switch(c)
	{
		case'1':
			create();
			break;
		case'2':
			view();
			break;
		case'3':
			exit(0);
			default:
				printf("wrong choice");
	}
	return 0;
}
void create()
{
	int a,i;
	struct node *temp;
	printf("enter the data to be inserted");
	scanf("%d",temp->next);
	temp->next=NULL;
	
	if(head=NULL)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		tail->next=temp;
		tail=temp;
	}
	i=i+1;
}

void view()
{
	struct node *t;
	create();
	t=head;
	while(t!=NULL)
	{
		printf("%d", t->data);
		t=t->next;
	}
}
