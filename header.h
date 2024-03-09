#include <iostream>
using namespace std;
#define SUCCESS 0
#define FAILIURE 1
typedef struct node
{
	int data;
	struct node *link;
}sll;
template <class s>

class Stack
{
	private:
		sll *head;
		unsigned int limit;
    public:
		Stack()
		{
			head=NULL;
			limit=0;
		}
		bool empty()
		{
			return (head==NULL);
		}
		unsigned int size()
		{
			return limit;
		}
		int push(int data)
		{
			sll *newnode=new sll;
			if(newnode==NULL)
			{
				cout<<"Error : Stack overflow"<<endl;
				return FAILIURE;
			}
			newnode->data=data;
			newnode->link=head;
			head=newnode;
			limit++;
			return SUCCESS;
		}
		int pop()
		{
			if(empty())
			{
				cout<<"Error : Stack underflow"<<endl;
				return FAILIURE;	
			}
			sll *temp=head;
			int res=temp->data;
			head=head->link;
			limit--;
			delete temp;
			return res;
		}
		int top()
		{
			if(empty())
			{
				cout<<"Error : Stack underflow"<<endl;
				return FAILIURE;
			}
			return head->data;
		}
		void display();
		~Stack()
		{
			while(head)
			{
				sll *temp=head;
				head=temp->link;
				delete temp;
			}
		}
};
template <class s>
void Stack<s>::display()
{
    if(head==NULL)
	{
		cout<<"Stack Underflow"<<endl;

	}
	else
	{
		sll *temp=head;
 	while(temp)
	{
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<endl;
	
   }
}
