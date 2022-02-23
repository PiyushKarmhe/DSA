#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
struct student
{                                   // 2.linked stacks
	int rno;
	char name[20];
	student*next;
}*top=NULL;
void push();   //insertion
void pop();    //deletion
void display();
void main()
{
	char ans;
	int choice;
	do
	{
		clrscr();
		cout<<"\n 1.push";
		cout<<"\n 2.pop";
		cout<<"\n 3.display";
		cout<<"\n 0.exit"<<'\n';
		cin>>choice;
		switch(choice)
		{
			case 1:
			push();
			break;
			case 2:
			pop();
			case 3:
			display();
			break;
			case 0:
			exit(0);
		}
		cout<<"\n do you want to continue ? ";
		cin>>ans;
		}while(ans=='y');
}
void push()
{
	student*ptr=new student;
	cout<<"enter rno and name :"<<"\n";
	cin>>ptr->rno;
	gets(ptr->name);
	ptr->next=NULL;
	if(top==NULL)
	top=ptr;
	else
	{
		ptr->next=top;
		top=ptr;
	}
	cout<<"\n node pushed"<<"\n";
}
void pop()
{
	if(top==NULL)
	cout<<"\n underflow";
	else
	{
		student*temp=top;
		top=top->next;
		delete temp;
		cout<<"\n node deleted";
	}
}
void display()
{
	if(top==NULL)
	cout<<"\n stack empty";
	else
	{
		student*temp=top;
		while(temp!=NULL)
		{
			cout<<temp->rno<<' '<<temp->name<<'\n';
			temp=temp->next;
		}
	}
}