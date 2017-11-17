#include <iostream>
using namespace std;
class array
{
	int stack[10],top;
array()
{
	top=-1;
}
    void push(int n)
    {
    	if(top==-1)
    	cout<<"Empty";
    	else
    	++TOP;
        stack[top]=n;
    }
    
    void display()
    {
    int i;
    
    for(i=TOP;i>=0;i--)
    {
        cout<<stack[i]<<" ";
    }
    cout<<endl;
    
    void pop()
    {
    int temp;
    temp=stack[top];
    TOP--;
    }
}
