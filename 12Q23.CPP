#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
struct node
{
 int Stu_no;
 char Stu_name[25];
 float Percentage;
 node *next;
};
class queue
{
 node *front, *rear;
 public:
 queue()
 {
  front=NULL;
  rear=NULL;
 }
 void addQ()
 {
  int no;
  char name[25];
  float Per;
  cout<<"\nEnter Student no : ";
  cin>>no;
  cout<<"\nEnter Student Name : ";
  gets(name);
  cout<<"\nEnter Student Percentage : ";
  cin>>Per;
  node *temp=new node;
  temp->Stu_no=no;
  strcpy(temp->Stu_name,name);
  temp->Percentage=Per;
  temp->next=NULL;
  if(rear==NULL)
  {
   front=temp;
   rear=temp;
  }
  else
  {
   rear->next=temp;
   rear=temp;
  }
 }
 void deleteQ()
 {
  if(front!=NULL)
  {
   node *temp;
   temp=front;
   cout<<"\nDeleted Record : ";
   cout<<"\nStudent Name : "<<front->Stu_name;
   cout<<" Student no : "<<front->Stu_no;
   cout<<" Student Percentage : "<<front->Percentage;
   front=front->next;
   delete temp;
   if(front==NULL)
   {
    front=NULL;
    rear=NULL;
   }
  }
  else
  cout<<"\nQueue is empty";
 }
 void display();
};
void queue::display()
 {
  node *temp=front;
  if(front==NULL)
  {
   cout<<"\nQueue is underflow";
   return;
  }
  cout<<"\nQueue : ";
  while(temp!=NULL)
  {
   cout<<"\nStudent Name : "<<temp->Stu_name;
   cout<<" Student no : "<<temp->Stu_no;
   cout<<" Student Percentage : "<<temp->Percentage;
   temp=temp->next;
  }//while(temp!=NULL);
 }
void main()
{
 queue q;
 int ch;
 do
 {
  clrscr();
  cout<<"\n\n1) Insert";
  cout<<"\n2) Delete";
  cout<<"\n3) Display";
  cout<<"\n4) Exit";
  cout<<"\nEnter Choice : ";
  cin>>ch;
  switch(ch)
  {
   case 1: q.addQ();
   break;
   case 2: q.deleteQ();
   break;
   case 3: q.display();
   break;
   case 4: exit(0);
   break;
   default: cout<<"\nInvalid Input!!!";
   break;
  }
  cout<<"\nPress any key to continue ";
  getch();
 }while(ch!=4);
}