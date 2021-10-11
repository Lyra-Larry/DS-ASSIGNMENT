// Frequency of a given element in doubly linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct LinkNode
{
	int data;
	struct LinkNode * next;
	struct LinkNode * prev;
}LinkNode;

LinkNode * getLinkNode(int data)
{
	// Create dynamic memory of LinkNode
	LinkNode * me = 
      (LinkNode * ) malloc(sizeof(LinkNode));
	if (me == NULL)
	{
		// Failed to create memory 
		return NULL;
	}
	me->data = data;
	me->next = NULL;
	me->prev = NULL;
	return me;
}
typedef struct DoublyLinkedList
{
	// Define useful field of DoublyLinkedList
	struct LinkNode * head;
	struct LinkNode * tail;
}DoublyLinkedList;

DoublyLinkedList * getDoublyLinkedList()
{
	// Create dynamic memory of DoublyLinkedList
	DoublyLinkedList * me = 
      (DoublyLinkedList * ) malloc(sizeof(DoublyLinkedList));
	if (me == NULL)
	{
		// Failed to create memory 
		return NULL;
	}
	// Set inital value
	me->head = NULL;
	me->tail = NULL;
	return me;
}
// Insert new node at end position
void insert(DoublyLinkedList * me, int value)
{
	// Create a node
	LinkNode * node = getLinkNode(value);
	if ((me->head == NULL))
	{
		// Add first node
		me->head = node;
		me->tail = node;
		return;
	}
	// Add node at last position
	me->tail->next = node;
	node->prev = me->tail;
	me->tail = node;
}
// Display node element of doubly linked list
void display(DoublyLinkedList * me)
{
	if ((me->head == NULL))
	{
		printf("Empty Linked List");
	}
	else
	{
		printf("Linked List Head to Tail :");
		// Get first node of linked list
		LinkNode * temp = me->head;
		// iterate linked list 
		while (temp != NULL)
		{
			// Display node value
			printf(" %d ", temp->data);
			// Visit to next node
			temp = temp->next;
		}
		printf("\nLinked List Tail to Head :");
		// Get last node of linked list
		temp = me->tail;
		// iterate linked list 
		while (temp != NULL)
		{
			// Display node value
			printf(" %d ", temp->data);
			// Visit to prev node
			temp = temp->prev;
		}
		printf("\n");
	}
}
// Count frequency of given node
void frequency(DoublyLinkedList * me, int key)
{
	int result = 0;
	LinkNode * temp = me->head;
	while (temp != NULL)
	{
		if ((temp->data == key))
		{
			// count key
			result++;
		}
		// Visit to next node
		temp = temp->next;
	}
	// Print result
	printf("\nFrequency of node %d is : %d",key, result);
}
int main()
{
	DoublyLinkedList * dll = getDoublyLinkedList();
	// Insert following linked list nodes
	insert(dll, 7);
	insert(dll, 2);
	insert(dll, 3);
	insert(dll, 4);
	insert(dll, 5);
	insert(dll, 3);
	insert(dll, 7);
	insert(dll, 3);
	//display all node
	display(dll);
	frequency(dll, 3);
	frequency(dll, 11);
	frequency(dll, 7);
}
