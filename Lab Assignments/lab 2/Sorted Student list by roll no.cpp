// Sorted student list by using Containment
#include <iostream>     
using  namespace std;  
#include<string.h>
class Date
{
	int dd,mm,yy;
	public:
		void get()
		{
			cout<<"enter date of birth\n";
			cin>>dd>>mm>>yy;
		}
		void put()
		{
			cout<<" Birth date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
class Student
{
	int rollno;
	char name[10];
	Date d;
	
	public:
		void get()
		{
			cout<<"enter rollno\n";
			cin>>rollno;
			cout<<"enter student name\n";
			cin>>name;
			d.get();
		}
		void put()
		{
			cout<<"Roll no : "<<rollno<<"\t"<<"Name is : "<<name<<"\t";
			d.put();
		}
		int getrollno()
		{
			return rollno;
		}
		char* getname()
		{
			return name;
		}
		void setrollno(int r)
		{
			rollno=r;
		}
		void setname(char* n)
		{
			strcpy(name,n);
		}
		
		
};
int main()
{
	Student s[10];
	int i,n,j;
	cout<<"Enter no of students :\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].get();
		
	}
	
	cout<<"sorted information is :\n";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].getrollno()>s[j].getrollno())
			{
			Student	temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	s[i].put();
}

