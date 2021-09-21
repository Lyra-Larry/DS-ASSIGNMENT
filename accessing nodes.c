//accessing nodes in a linked list
#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node n1,n2,n3,n4,n5;
	n1.data=10;       //accessing data to node n1
	n2.data=20;       //accessing data to node n2
	n3.data=30;       //accessing data to node n3
	n4.data=40;       //accessing data to node n4
	n5.data=50;       //accessing data to node n5
	
	n1.next=&n2;
	n2.next=&n3;
	n3.next=&n4;
	n4.next=&n5;
	printf("%d\n", n1.data);    //accessing node2 frpm n1
	printf("%d\n",n1.next->data);    //accessing node2 from n1
	printf("%d\n",n1.next->next->data);   //accessing node3 from n1
	printf("%d\n",n1.next->next->next->data);   //accessing node4 from n1
	printf("%d\n",n1.next->next->next->next->data);  //accessing node5 from n1


return 0;
	
}
