#include<iostream>
using namespace std;

class Time
{
	int hrs, min, sec;
	public:
		Time(int h, int m, int s)
		{
			hrs=h;
			min=m;
			sec=s;
		}
		
		friend void operator - (Time &, int);
		friend void operator + (Time &, int);
		
		void Display(){
			cout<<"Time is: "<<hrs<<" : "<<min<<" : "<<sec<<endl;
		}
		
	};
	
	void operator - (Time &x, int y)
	{
		x.hrs=x.hrs-y;
		x.min = x.min-2;
		x.sec = x.sec-4;
  	    cout<<"Time is: "<<x.hrs<<" : "<<x.min<<" : "<<x.sec<<endl;
	}
	
	void operator + (Time &x, int y)
	{
		x.hrs = x.hrs+y;
		x.min = x.min+1;
		x.sec = x.sec+5;
  	    cout<<"Time is: "<<x.hrs<<" : "<<x.min<<" : "<<x.sec<<endl;
	}
	
	
int main()
	{ int a , b , c;
		cout<<"Enter hours \n ";
		cin>>a;
	
		cout<<"Enter Minutes \n";
		cin>>b;
		
		cout<<"Enter seconds "<<endl;
		cin>>c;
		
		Time t1 (a , b ,c);
		t1.Display();
		t1-1;
	    t1+2;
		
	}
