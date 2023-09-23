#include<iostream>
using namespace std;

class Student
{
	int m1, m2;
	int roll_no;
	public:
		Student(){
			m1=0;
			m2=0;
		}
		
		Student(int roll_no,int m1, int m2){
			this->m1=m1;
			this->m2=m2;
			this->roll_no= roll_no;
		}
	int get()
	{
		return m1 +m2;
	}
	
	void Displaystud(){
			cout<<"The marks of m1 is : "<<this-> m1<<endl;
			cout<<"The marks of m2 is : "<<this->m2<<endl;
		}
};

class Sports
{
	int sportMarks;
	public:
	
		
			sports (int marks)
		{
			sportMarks = marks;		   
		}
		
		int getsm(){
			return sportMarks;
		}
		void Displaysm(){
			cout<<"The sports marks is : "<< sportMarks<<endl;
			
		}
};

class Result: public Student, public Sports
{

public:
	Result(int roll_no , int m1 , int m2 , int sportMarks ):Student(roll_no ,m1,m2),Sports(sportMarks)
	{
		
	}
	
		void Display(){
			
			int total = Student::getstud() + Sports::getsm();
	float	avg = (float )(total/3);
	cout<<"The total marks of m1, m2 and sports is: "<<total<<endl;
	cout<<"The Average result is : "<<avg<<endl;
}
};

int main()
{
	
Result r1(20,30,40);
r1.Display();
return 0;
}
