#include<iostream>
using namespace std;
void display(char = '*', int=30);
void display1(char = '-', int=30);

int main(){
//	cout<<"no. of arg passed";
int a; char b; float c;
	display();
	cout<<"Data Type"<<"        "<<"Size"<<"\n";
	display();
	cout<<"Integer"<<"            "<<sizeof(a)<<endl;
	display1();
	cout<<"Character"<<"          "<<sizeof(b)<<endl;
	display1();
	cout<<"Float"<<"              "<<sizeof(c)<<endl;
	display();
	
	
	
	
}

void display(char c, int count)
{
	for(int i=1; i<=count; ++i)
	{
		cout<<c;
	}
	{
	
	cout<<endl;
	}
};
void display1(char c, int count)
{
	for(int i=1; i<=count; ++i)
	{
		cout<<c;
	}
	{
	
	cout<<endl;
	}
};
