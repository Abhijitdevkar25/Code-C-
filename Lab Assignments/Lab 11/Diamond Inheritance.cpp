#include<iostream>
using namespace std;

class A{
	public :
	A(){
	cout<<"In default constructor A "<<endl;	
	}
	~A(){
		cout<<"In destructor A "<<endl;
	}
};

class B : virtual public A  // class B :  public A 
{
	public:
	B(){
	cout<<"In default constructor B "<<endl;	
	}
	~B(){
		cout<<"In destructor B "<<endl;
	}
};

class C : virtual public A  // class C : public A
{
	public:
	C(){
	cout<<"In default constructor C "<<endl;	
	}
	~C(){
		cout<<"In destructor C "<<endl;
	}
};

class D : public B ,  public C
{
	public:
	D(){
	cout<<"In default constructor D "<<endl;	
	}
	~D(){
		cout<<"In destructor D "<<endl;
	}
};

int main()
{
	D d;
}
