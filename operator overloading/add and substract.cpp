#include<iostream>
using namespace std;
class complex
{
	int real,img;

public:
	complex();
	complex(int,int);
	
	complex operator+(complex&);
	complex operator-(complex&);
    void display();	
};
complex::complex()
{
	real=img=0;
}
complex::complex(int real,int img)
{
	this->real=real;
	this->img=img;
}
void complex::display()
{
	if(img>0)
	cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
	else
	cout<<"complex number is "<<real<<img<<"i"<<endl;
}
complex complex::operator+(complex & x)
{
	complex temp;
	temp.real=this->real + x.real;
	temp.img=this->img + x.img;
	return temp;
}
complex complex::operator-(complex & x)
{
	complex temp;
	temp.real=this->real - x.real;
	temp.img=this->img -x.img;
	return temp;
}

 
int main()
{
 complex c1(2,4);
   
	complex c2(5,6);
	complex c3=c1+c2;
	 c3.display();
	complex c4=c1-c2;
	c4.display();
}

