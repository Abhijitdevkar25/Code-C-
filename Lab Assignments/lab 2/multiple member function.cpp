#include<iostream>
using namespace std;
int fun();

int main()
{
	const int y=1;

	cout<<"final value"<<fun()<<endl;
	cout<<"final value"<<fun()<<endl;
	cout<<"final value"<<fun()<<endl;
	cout<<" y is "<<y; //constant data members cannot be modified
	
    return 0;
}

int fun()
{	static int x;
	
	cout<<x<<endl;

	
	x++;
	
	return x;
	
}
