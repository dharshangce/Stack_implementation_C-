#include <iostream>
#include "header.h"
using namespace std;

int main()
{
	int option,data;
	Stack<int>s;
	cout<<"1.Push"<<endl;
	cout<<"2.Pop"<<endl;
	cout<<"3.Empty"<<endl;
	cout<<"4.size"<<endl;
	cout<<"5.top"<<endl;
	cout<<"6.Display"<<endl;
	cout<<"7.Exit"<<endl;
	while(1)
	{
		cin>>option;
		switch(option)
		{

		case 1:
		{
			cout<<"Enter the data to insert"<<endl;
			cin>>data;
		    if(	s.push(data)!=SUCCESS)
			{
				cout<<"Info : Data insertion failure"<<endl;
				
			}
			break;
		}
		case 2:
		{
            int ret;
			if((ret=s.pop())!=FAILIURE)
			{
				cout<<ret<<" - Element deleted"<<endl;
			}
			else
			{
				cout<<"Stack is empty"<<endl;
			}
			break;
		}
		case 3:
		{
			if(s.empty())
			{
				cout<<"Stack is Empty"<<endl;
			}
			else
			{
				cout<<"Stack is Non empty"<<endl;
			}
			break;

		}
		case 4:
		{
		
             cout<<"No. of elements is "<<s.size()<<endl;
			 break;
		}
		case 5:
		{
			int ret;
			if((ret=s.top())!=FAILIURE)
              cout<<"Top element is "<<s.top()<<endl;
			  break;
		}
		case 6:
		{
			 s.display();
			 break;
		}
		case 7:
		{
			return 0;
		}
		default:
		{
			cout<<"Please give valid option"<<endl;
		}
		
		
	}
}
}


