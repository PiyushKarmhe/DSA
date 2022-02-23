#include<iostream.h>
#include<conio.h>
#include<process.h>
float stack[10], n=10, top=-1;
void PUSH(int val)
{
   if(top>=n-1)
      cout<<"Stack Overflow"<<endl;
   else
   {
      top++;
      stack[top]=val;
   }
}
void POP()
{
   if(top<=-1)
      cout<<"Stack Underflow"<<endl;
   else
   {
      cout<<"The popped element  : "<<stack[top]<<endl;
      top--;
   }
}
void DISPLAY()
{
   if(top>=0)
   {
      cout<<"Stack elements are : ";
      for(int i=top; i>=0; i--)
	 cout<<stack[i]<<" ";
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
	 case 1: cout<<"Enter value to be pushed : ";
		 cin>>val;
		 PUSH(val);
		 break;
	 case 2: POP();
		 break;
	 case 3: DISPLAY();
		 break;
	 case 4: exit(0);
		 break;
	 default: cout<<"Invalid Choice"<<endl;
      }
      cout<<"\nPress any key to continue";
      getch();
   }while(ch!=4);
}