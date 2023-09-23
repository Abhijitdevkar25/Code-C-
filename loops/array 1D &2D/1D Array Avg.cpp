#include<iostream>
using namespace std;

int main()
{
	int a[5]; int sum =0; int i;
	cout<<"enter the marks of 5 subjects\n";
	for(i=0;i<5;i++)
	{
	cin>>a[i];
	sum = sum + a[i];
	}
 float avg = (float)sum/5;
 cout<<"Average of the 5 subjects is :  "<<avg<<endl;
}
