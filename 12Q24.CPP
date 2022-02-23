#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
struct node
{
 int Stu_no;
 char Stu_name[20];
 float Percentage;
 node *next;
};
class stack
{
 node *top;
 public:
 stack()
 {
  top=NULL;
 }
 void push()
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
  temp->next=top;
  top=temp;
 }
 void pop()
 {
  if(top==NULL)
   cout<<"\nStack is Underflow!!";
  else
  {
   cout<<"\nDeleted record";
   cout<<"\nStudent Name : "<<top->Stu_name;
   cout<<" Student no : "<<top->Stu_no;
   cout<<" Student Percentage : "<<top->Percentage;
   top=top->next;
  }
 }
 void display();
};
void stack::display()
{
  node *temp=top;
  cout<<"\nStack : \n";
  if(temp==NULL)
  {
   cout<<"\nStack is Underflow!!";
   return;
  }
  while(temp!=NULL)
  {
   cout<<"\nStudent Name : "<<temp->Stu_name;
   cout<<" Student no : "<<temp->Stu_no;
   cout<<" Student Percentage : "<<temp->Percentage;
   temp=temp->next;
  }
}
void main()
{
 stack s;
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
   case 1: s.push();
   break;
   case 2: s.pop();
   break;
   case 3: s.display();
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