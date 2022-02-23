#include<iostream.h>
#include<conio.h>
#include<process.h>
void push(int[],int&);   //insertion
void pop(int[],int&);    //deletion
void display(int[],int);
const int size=50;
void main()
{
	int top=-1;
	int stack[size];
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
			push(stack,top);
			break;
			case 2:
			pop(stack,top);
			case 3:
			display(stack,top);
			break;
			case 0:
			exit(0);
		}
		cout<<"continue?";
		cin>>ans;
		}while(ans=='y');
}
void push(int stack[],int&top)
{
	if(top==size-1)
	cout<<"overflow";
	else
	{
		top++;
		cout<<"enter elements "<<'\n';
		cin>>stack[top];
		cout<<"element pushed to stack "<<'\n';
	}
}
void pop(int stack[],int&top)
{
	if(top==-1)
	cout<<"underflow";
	else
	{
		cout<<"element to be deleted is "<<stack[top];
		top--;
	}
		cout<<"\n element popped"<<'\n';
}
void display(int stack[],int top)
{
	if(top==-1)
	cout<<"stack empty";
	else
	{
		cout<<stack[top]<<"<-"<<endl;
		for(top--;top>=0;top--)
		cout<<stack[top]<<'\n';
	}

}