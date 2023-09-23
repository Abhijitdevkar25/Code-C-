#include<iostream>
using namespace std;

class A
{
	int c;
	public :
		int a;
	protected :
		int b;
		
	public:
		void display(){
			cout<<"in display of A\n";
		}
};

class B : private A
{
	public :
		void show()
		{
			cout<<a<<" "<<b; // a & b become private
		}
};

class C : private B
{
	public:
		void show()
		{
			cout<<a<<b; // error, private data members are not accessible
		}
};

int main()
{
	//B b1;
//	b1.show();
//	b1.display(); -----------error
	
	C c1;
	c1.show(); ---------error
	
}
