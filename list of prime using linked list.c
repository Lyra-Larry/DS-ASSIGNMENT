//list of prime numbers using linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
struct list
{
 int data;
 struct list* next;
}*st=NULL;

struct list*create(int data)
{
 struct list*p;
 p=(struct list*)malloc(sizeof(struct list));
 p->data=data;
 p->next=NULL;
 return p;
}

void add(int data)
{
 struct list*p,*q;
 p=create(data);
 if(st==NULL)
 {
  st=p;
 }
 else
 {
  q=st;
  while(q->next!=NULL)
  q=q->next;
  q->next=p;
 }
}

void display()
{
 struct list*p;
 p=st;
 while(p!=NULL)
 {
  printf("%4d",p->data);
  p=p->next;
 }
}

void getprime(int limit)  //to get list of Prime numbers upto N
{
 int i=2,tmp;
 struct list*p;
 while(i<=limit)
 {
     tmp=sqrt(i);
     if(tmp==1)
  add(i++);
     else
     {
  p=st;
  tmp=sqrt(i);
  while(tmp>=p->data)
  {
   if(i%(p->data)!=0)
    p=p->next;
   else
    break;
  }
  if(tmp < p->data)
   add(i);
  i++;
     }
 }
}


void main()
{ 
 system("cls");
 getprime(10000);
 display();
 getch();
 return;
}
