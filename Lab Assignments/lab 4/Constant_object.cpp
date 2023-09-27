#include<iostream>
using namespace std;

class Constant
{
	int a,b;
	public:
	Constant()
	{
	}
		
	void sum(int a,int b)
 	{
 		cout<<"Inside normal function, sum is: "<<a+b<<endl;
	}	
	
	void constant_Sum(int a,int b)const
	{
		cout<<"Inside const function sum  is: "<<a+b<<endl;
	}
};

int main()
{   
    const Constant a1;
    Constant a2;
    a2.sum(11,20);		//non constant object-> non constant function
    a1.constant_Sum(50,40); //constant object-> constant function
    a2.constant_Sum(45,10);	// non constant object-> constant function
}

