#include<iostream>
using namespace std;

class A
{ int a;
	public:
		void display();
		A(int);
		A()
		{
			cout<<"in default of A\n";
			
		}
	};
			A::A(int p)
		{
			cout<<"in parametrized of A\n ";
			a=p;
		}
		
		void A::display()
		{
			cout<<"in display of class A\n";
			cout<<a<<endl;
		}


class B: public A
{	int b;
	public:
		B()
		{
			cout<<"in default of B\n";
		}
		B(int p, int q):A(p) // base class initialisation list only for constructor
		{
			cout<<"in parametrized constructor of B\n";
			b=q;
		}
		
		
		void display()
		{
			A::display();
			cout<<"in display of class B\n";
			cout<<b<<endl;
		}
};

int main()
{
	B b1(10,20);
	b1.display();
	cout<<"size of object b1 is : "<<sizeof(b1)<<endl;
	
	
}
