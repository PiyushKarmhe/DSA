#include<iostream.h>
#include<conio.h>
#include<process.h>
void insert(float[],int&,int&);
void Delete(float[],int&,int&);
void display(float[],int,int);
const int size=50;
void main()
{
	float q[size];
	int f=-1,r=-1;
	char ans;
	int choice;
	do
	{
		clrscr();
		cout<<"\n\n\n 1) Insertion";
		cout<<"\n 2) Delete";
		cout<<"\n 3) Display";
		cout<<"\n 0) Exit"<<'\n';
		cout<<"\n Enter Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
			insert(q,f,r);
			break;
			case 2:
			Delete(q,f,r);
			case 3:
			display(q,f,r);
			break;
			case 0:
			exit(0);
		}
		cout<<"\nPress any key to continue";
		getch();
	}while(choice!=0);
}
void insert(float q[],int&f,int&r)
{
	if(r==size-1)
	cout<<"\n overflow";
	else if(r==-1)
	{
		f=r=0;
		cout<<"\n Enter element : ";
		cin>>q[r];
		cout<<"\n Element inserted";
	}
	else
	{
		r++;
		cout<<"\n Enter element : ";
		cin>>q[r];
		cout<<"\n Element inserted "<<"\n";
	}
}
void Delete(float q[],int&f,int&r)
{
	if(f==-1)
	cout<<"\n Underflow";
	else if(f==r)
	{
		cout<<"\n Elements to be deleted : "<<q[f];
		f=r=-1;
		cout<<"\n Element deleted";
	}
	else
	{
		cout<<"\n Element to be deleted : "<<q[f];
		f++;
		cout<<"\n Element deleted"<<'\n';
	}
}
void display(float q[],int f,int r)
{
	if(f==-1)
	cout<<"\n Queue empty";
	else
	{
	 cout<<"\n Queue : ";
		for(int i=f;i<r;i++)
		cout<<q[i]<<"<-";
		cout<<q[r];
	}
}