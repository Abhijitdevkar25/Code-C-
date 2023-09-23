#include <iostream>
using namespace std;
class shape 
{
	public:
		virtual void display() =0;
		virtual int area() =0;
};

class sqr :public shape
{
	int side;
	public:
	void display();
	int area();
	sqr(int);
};


sqr::sqr(int side)
 {
 	this->side=side;
 }
 int sqr::area()
 {
 	return side * side;
 }
 void sqr::display()
 {
 	cout<<"side of sqr is :"<<side<<endl;
 }
 
 
 class rect : public shape
{
	int l; int b;
	public:
		void display();
	int area();
	rect(int,int);
};

rect :: rect (int l, int b)
{
	this->l=l;
	this->b=b;
}

int rect:: area()
{
	return l*b;
}

void rect :: display()
{
	cout<<"length of rectangle is :"<<l<<endl;
	cout<<"breadth of rectangle is :"<<b<<endl;
}

 int main()
 {
 	shape * ptr;
 	ptr = new sqr(20);
 	ptr->display();
 	
 		cout << "Area of Square : " << ptr->area() << endl;
 		
 	ptr = new rect(10,20);
 	ptr->display();
 		cout << "Area of Rectangle : " << ptr->area() << endl;
 }
