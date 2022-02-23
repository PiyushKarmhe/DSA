#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<process.h>
class student
{
 int Stu_no;
 char Stu_name[25];
 float Percentage;
 public:
 void get_data()
 {
  cout<<"\nGive Student No. : ";
  cin>>Stu_no;
  cout<<"\nGive Student Name : ";
  gets(Stu_name);
  cout<<"\nGive Student Percentage : ";
  cin>>Percentage;
 }
 void put_data()
 {
  cout<<"\nStudent No. : "<<Stu_no<<" Student Name : "<<Stu_name;
  cout<<" Percentage : "<<Percentage;
 }
}stack[10];
int n=10 , top=-1;
void push()
{
   if(top>=n-1)
      cout<<"Stack Overflow"<<endl;
   else
   {
      top++;
      cout<<"\nEnter values to be pushed : ";
      stack[top].get_data();
   }
}
void pop()
{
   if(top<=-1)
      cout<<"Stack Underflow"<<endl;
   else
   {
      cout<<"The popped record : ";
      stack[top].put_data();
      top--;
   }
}
void display()
{
   if(top>=0)
   {
      cout<<"Stack elements are : ";
      for(int i=top; i>=0; i--)
	 stack[i].put_data();
	 cout<<endl;
   } else
      cout<<"Stack is empty";
}
void main()
{
   int ch, val;
   do
   {
      clrscr();
      cout<<"\n\n1) Push in stack"<<endl;
      cout<<"2) Pop from stack"<<endl;
      cout<<"3) Display stack"<<endl;
      cout<<"4) Exit"<<endl;
      cout<<"Enter choice: ";
      cin>>ch;
      switch(ch)
      {
	 case 1: push();
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
		 break;
	 default: cout<<"Invalid Choice"<<endl;
      }
      cout<<"\nPress any key to continue";
      getch();
   }while(ch!=4);
}