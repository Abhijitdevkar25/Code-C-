//Copy Constructor ->by compiler

#include<iostream>
#include<string.h>
using namespace std;


class date
{
	int dd, mm, yy;
	public:
		void show();
		date(int, int, int);
		
};

void date:: show()
{
	cout<<"date is "<< dd<<"/"<<mm<<"/"<<yy<<endl;

}

date::date(int d, int m, int y) 
{
	dd= d;
	mm= m;
	yy= y;
}
int main ()
{
	date d1(11,06,1997);
	d1.show();
	date d2(d1);
	d2.show();
}
