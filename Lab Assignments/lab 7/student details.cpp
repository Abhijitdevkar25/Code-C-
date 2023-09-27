
#include<iostream>
using namespace std;

class Student
{
int RollNo;
int Marks;
int DateOfBirth;
public:

  void putInfo();
  void getInfo()
{
    cout << "Enter Roll number : ";
    cin >>  RollNo;
    cout << "\nEnter Marks : ";
    cin >> Marks;
    cout << "\nEnter Date of Birth : ";
    cin>>DateOfBirth;
}

};


  void Student::putInfo()
{
      cout << RollNo << " ";
      cout << Marks << " ";
 	  cout<<DateOfBirth<<" ";
      cout << endl;
}

int main()
{

Student s1[50];
   int n=10, i;

   for(i = 0; i < n; i++)
	{
		 s1[i].getInfo();
	}

cout << "Student Data - " << endl;


for(i = 0; i < n; i++)
	{
		s1[i].putInfo();
	}
return 0;
}

