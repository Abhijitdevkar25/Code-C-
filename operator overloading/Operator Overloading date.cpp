#include<iostream>
using namespace std;

class Date1
{
	int day, month, year;
	public:
		Date1(int d, int m, int y)
		{
			day=d;
			month=m;
			year=y;
		}
		
		friend void operator - (Date1 &, int);
		friend void operator + (Date1 &, int);
		
		void Display(){
			cout<<"Date is: "<<day<<"/"<<month<<"/"<<year<<endl;
		}
		
	};
	
	void operator - (Date1 &x, int y)
	{
		x.day=x.day-y;
		x.month = x.month-2;
		x.year = x.year-4;
		cout<<"Date is: "<<x.day<<"/"<<x.month<<"/"<<x.year<<endl;
	}
	
	
	void operator + (Date1 &x, int y)
	{
		x.day=x.day+y;
		x.month = x.month+2;
		x.year = x.year+4;
		cout<<"Date is: "<<x.day<<"/"<<x.month<<"/"<<x.year<<endl;
	}
	
	int main()
	{ int dd, mm, yy;
		cout<<"Enter Day";
		cin>>dd;
	
		cout<<"Enter Month";
		cin>>mm;
		
		cout<<"Enter Year";
		cin>>yy;
		
		Date1 d1 (dd, mm, yy);
		d1.Display();
		d1-1;
	    d1+2;
		
	}
