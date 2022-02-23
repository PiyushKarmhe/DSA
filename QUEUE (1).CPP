#include<iostream.h>
#include<conio.h>
#include<process.h>
void insert(int[],int&,int&);   //insertion
void Delete(int[],int&,int&);    //deletion
void display(int[],int,int);
const int size=50;
void main()
{
	int q[size],f=-1,r=-1;
	char ans;
	int choice;
	do
	{
		clrscr();
		cout<<"\n 1.insertion";
		cout<<"\n 2.delete";
		cout<<"\n 3.display";
		cout<<"\n 0.exit"<<'\n';
		cout<<"enter choice \n";
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
		cout<<"\n continue?";
		cin>>ans;
		}while(ans=='y');
}
void insert(int q[],int&f,int&r)
{
	if(r==size-1)
	cout<<"\n overflow";
	else if(r==-1)
	{
		f=r=0;
		cout<<"\n enter element";
		cin>>q[r];
		cout<<"\n element inserted";
	}
	else
	{
		r++;
		cout<<"\n eneter element";
		cin>>q[r];
		cout<<"\n enter inserted "<<"\n";
	}
}
void Delete(int q[],int&f,int&r)
{
	if(f==-1)
	cout<<"\n underflow";
	else if(f==r)
	{
		cout<<"\n elements to be deleted is"<<q[f];
		f=r=-1;
		cout<<"\n element deleted";
	}
	else
	{
		cout<<"\n element to be deleted is "<<q[f];
		f++;
		cout<<"\n element deleted"<<'\n';
	}
}
void display(int q[],int f,int r)
{
	if(f==-1)
	cout<<"\n queue empty";
	else
	{
		for(int i=f;i<r;i++)
		cout<<q[i]<<"<-";
		cout<<q[r];
	}
}