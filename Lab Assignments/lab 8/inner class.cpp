#include<iostream>
using namespace std;

class Operation
   {
   	 public:
   	 		
   	 	class sub
			{  
			    public:
			    	int a ,b ,r;
				 result(int a, int b)
				 {
				 	this->a=a;
				 	this->b=b;
				 	r = a-b;
			     }
			     void Display()
			     {
				 	cout <<"substraction is : "<<r<<endl;
				 }
			 }; 
   };
   
int main()

{
	Operation::sub s1;
	s1.result(14,6);
	s1.Display();
}
