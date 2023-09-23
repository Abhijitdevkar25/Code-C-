#include<iostream>
using namespace std;

class A
{	
 public :
    A()
    {
 		cout << "Inside const A " << endl;
	} 
	~A()
	{
	   cout << "Inside dest A " << endl;	
	}
	
};
class B : public A
{
	public :
   		B()
   		{
   			cout<< "Inside const B " << endl;
   		}
   ~B()
   {
   		cout << "Inside dest B " << endl;	
   }
	
};
class C : public A
{
	public:
   		C()
   		{
   			cout<< "Inside const B " << endl;
		}
   		~C()
   		{
   			cout << "Inside dest C " << endl;	
   		}
};

int main()
{

	B b;
	C c;
}


