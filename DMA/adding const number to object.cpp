#include<iostream>
using namespace std;

class demo
{
	int a;
	public:
		demo()
		{
			a=5;
		}
		int add(int a)
		{
			this->a = this->a + a;
			return this->a ;  
		}
};

int main()
{
	demo d;

	cout<<"Addition is "<<" "<<d.add(10)<<endl;
	
}
