// Min & Max element in doubly linked list
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
void create();
int getMaxNode(struct node *head);
int getMinNode(struct node *head);
void view();

int main()
{
  create();
  view();
    printf("\n The Maximum Value in the Linked List : %d\n\n", getMaxNode(head));
       printf("\n The Mainimum Value in the Linked List : %d\n\n", getMinNode(head));
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

int getMaxNode(struct node *head)
{
    if(head == NULL){
        printf(" User message : Invalid Input !!!!\n");
        return INT_MIN;
    }
    int max = head->data;
    while(head != NULL){
        if(head->data > max){
            max = head->data;
        }
        head = head->next;
    }
    return max;
}
int getMinNode(struct node *head)
{

        int min=head->data;
        while(head!=NULL)
        {
                if(head->data< min)
                        min =head->data;
                head=head->next;
        }
        return min;
}



