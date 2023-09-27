#include<iostream>
using namespace std;
class Printer1{
	public:
		void display1()
		{
			cout<<"printer1 is called"<<endl;
		}
	friend void fun();
};

class Printer2
{
	public:
		void display2()
		{
			cout<<"printer2 is called"<<endl;
		}	
		friend void fun();
		
	
};

class Computer:public Printer1,Printer2
{
	public:
		void display3(){
			cout<<"computer class is called"<<endl;
		}
	

};




void fun()
{
	cout<<"friend function is called"<<endl;
	
}


int main(){
	fun();
	Computer c1;
	c1.display1();
	
}
