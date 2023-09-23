#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"in default of A\n";
			
		}
		void display()
		{
			cout<<"in display of class A\n";
			
		}
};

class B: public A
{
	public:
		B()
		{
			cout<<"in default of B\n";
		}
		
		void display()
		{
			A::display();
			cout<<"in display of class B\n";
		}
};

int main()
{
	B b1;
	b1.display();
	
	
}
