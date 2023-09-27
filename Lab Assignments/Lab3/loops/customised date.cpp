#include<iostream>
using namespace std;

class date
 {
	int dd, mm, yy;
	
	public:
		void setDate(int dd1, int mm1, int yy1)
		{
			dd=dd1;
			mm=mm1;
			yy=yy1;
		}
		
		void getDate()
		{
		cout<<"Today's Date: "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
		
		void setDd(int d){
			dd=d;
		}
		
		void setMM(int m)
		{
			mm=m;
		}
		
		void setYY()
		{
			cout<<"Enter the YEAR : "<<endl;
			cin>>yy;
		}
		
		void getDD();	//outline function
		void getMM();	//outline function
		void getYY();	//outline function
};

void date :: getDD()
{
	cout<<"Updated date is: "<<dd<<endl;
}

void date :: getMM()
{
	cout<<"Modified month is: "<<mm<<endl;
}

void date :: getYY()
{
	cout<<"THE YEAR is: "<<yy<<endl;
}

int main()
{	
	date today;
	today.setDate(19,1,9000);
	today.getDate();
	today.setYY();
	today.getYY();	
}
