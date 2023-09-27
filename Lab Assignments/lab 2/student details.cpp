#include<iostream>
using namespace std;
#include<string.h>

class student
{
	int roll_no; char name[10]; double fees;
	
	public:
		student(int, char[], double);
		student(student &s)
		{
			roll_no=s.roll_no;
			strcpy(name,s.name);
			fees=s.fees;
		}
		void display();
};
student::student(int r,char n[], double f)
{
	cout<<"Copy Constructor is called."<<endl;
	roll_no=r;
	strcpy(name,n);
	fees=f;
}
void student::display()
{
	cout<<"Students name is: "<<name<<endl;
	cout<<"Students Roll No is: "<<roll_no<<endl;
	cout<<"Students fees is: "<<fees<<endl;
}
int main()
{
	student s(77,"Ganesh",106200);
	s.display();

}
