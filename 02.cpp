#include <iostream>
#include<stdlib.h>
using namespace std;

class list
{
public:
	struct node
	{
		int info;
		node* next;
	} *first,*last,*temp;

list()
{
	first=NULL;
	last=NULL;
	temp=NULL;
}
void push()
{
    temp=new node;
    int n;
    cout<<"\nEnter an Element:";
    cin>>n;
    temp->info=n;
    temp->next=NULL;
    if(first==NULL)
    {
        first=temp;
        last=first;
    }
 
    else
    {
        last->next=temp;
        last=temp;
    }
}

void pop()
{
	last=last-1;
}

void display()
{
    node *temp=first;
    if(temp==NULL)
    {
        cout<<"\nList is Empty";
    }
    while(temp!=NULL)
    {
        cout<<temp->info;
        cout<<"-->";
        temp=temp->next;
    }
    cout<<"NULL";
}
};

int main() 
{
        int ch;
        cout<<"\n1:PUSH\n2:POP\n3:DISPLAY\n4:EXIT\n";
        cout<<"\nEnter Your Choice:";
        cin>>ch;
list a;
if(ch==1)
a.push();
else if(ch==2)
a.pop();
else if(ch==3)
a.display();

return 0;
}
