#include<iostream.h>
#include<conio.h>
#include<process.h>
class queue
{
 float a[5];
 int front, rear;
 public:
 queue()
 {
  front=-1;
  rear=-1;
 }
 void QINSERT()
 {
  float value;
  cout<<"\nGive marks : ";
  cin>>value;
  if((rear==4 && front==0)||front==rear+1)
  {
   cout<<"\nQueue is overflow!!!";
   return;
  }
  else if(rear==4)
   rear=0;
  else if(rear==-1)
  {
   ++front;
   ++rear;
  }
  else
  {
   ++rear;
  }
  a[rear]=value;
 }
 void QDELETE()
 {
  if(front==-1)
  {
   cout<<"\nQueue is underflow!!";
   return;
  }
  if(front==rear)
  {
   front=-1;
   rear=-1;
  }
  else if(front==4)
  {
   cout<<"\nElement deleted : "<<a[front];
   front=0;
  }
  else
  {
   cout<<"\nElement deleted : "<<a[front];
   ++front;
  }
 }
 void QDISPLAY();
};
void queue::QDISPLAY()
 {
  if(rear==-1 && front ==-1)
  {
   cout<<"\nQueue is underflow";
  }
  else
  {
   int temp=front;
   do
   {
    cout<<" "<<a[temp];
    temp=(temp+1)%5;
   }while(temp!=(rear+1)%5);
  }
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
   case 1: q.QINSERT();
   break;
   case 2: q.QDELETE();
   break;
   case 3: q.QDISPLAY();
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