/*accept no of subject and name from user dynamically
 and accept marks for each subject then display avg and name of student*/
#include<iostream>
using namespace std;
int main()
{
	 int m,i,n,sum=0;float avg;
	 cout<<"enter no of subject\n" ;
	 cin>>m;
	 	 cout<<"enter the marks : \n" ;
	 cin>>n;
	 int* marks=new int[m];
	 char* name= new char[n+1];
	 for (i =0;i<=m;i++)
	 {
	 	 cin>>marks[i];
	 	 sum +=marks[i];
	 }
	    avg= (float)sum/m;
	cout<<"enter name of student: ";
	cin>>name;
	cout <<"name is:"<<name<<endl;
	cout << "average is : "<<avg;
	delete[] marks;
	delete[] name;
}
