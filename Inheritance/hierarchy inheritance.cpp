#include<iostream>
using namespace std;

class student
{
	int roll_no, m1, m2;
	public :
		student (int roll_no, int m1, int m2)
		{
			this->roll_no=roll_no;
			this->m1=m1;
			this->m2=m2;
			
		}
		int get()
		{
			return m1+m2;
		}
		void display()
		{
			cout << "Roll No : " << this->roll_no << endl;
			cout << "M1 Marks : " << this->m1 << endl;
			cout << "M2 Marks : " << this->m2 << endl;
		}
};

class sports
{
	int  sportmarks;
	public :
		sports (int  sportmarks)
		{
			this-> sportmarks =  sportmarks;		   
		}
		int get()
		{
			return this-> sportmarks;
		}
		void display()
		{
			cout << "Sports Marks : " << this-> sportmarks << endl;
		}
	
};

class result : public student, public sports
{
	int res;
	float avgs;
	public :
		result(int roll_no, int m1, int m2, int sportmarks) : student(roll_no , m1, m2), sports( sportmarks)
		{
			
		}
		void avg()
		{
			this->res = student :: get() + sports :: get() ;
			this->avgs = (float)(this->res/3);
		}
		void display()
		{
			student :: display();
			sports :: display();
			cout << "Avg : " << avgs << endl;
		}
};

int main()
{
	result r1(1, 86, 52, 46);
	r1.avg();
	r1.display();
	
}
