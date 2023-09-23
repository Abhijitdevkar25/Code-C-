#include<iostream>
#include<string.h>
using namespace std;

class string1
{
	int len;
	char* ptr;
	public:
		void show();
		string1();
		string1(int);
		string1(char*);
		string1(char, int);
};

void string1 :: show()
{
cout<<"Name is: "<<ptr<<endl;
cout<<"length is: "<<len<<endl;	
}
string1::string1()
{
	int len;
	cout<<"enter the length : ";
	cin>>len;
	this->len=len;
	char ptr1[len+1];
	ptr=new char[this->len+1];
	cout<<"enter the string :\n";
	cin>>ptr1;
	strcpy(ptr,ptr1);
}

string1::string1(int len)
{
	
	this->len=len;
	ptr = new char[this->len+1];
	char ch[this->len+1];
	cout<<"enter the string"<<endl;
	cin>>ch;
	strcpy(ptr,ch);
	
}

string1::string1(char ch,int len)
{	int i;
	this->len=len;
	ptr= new char[len+1];
	for(i=0;i<this->len;i++)
	{
	ptr[i]=ch;
	cout<<ptr[i];	
	}
	ptr[i]='\0';
}

string1::string1(char* ptr1)
{
	len=strlen(ptr1);
	ptr=new char[len+1];
	strcpy(this->ptr, ptr1);
}



int main()
{
	string1 s1;
	s1.show();
	string1 s2(5);
	s2.show();
	string1 s3("cdac");
	s3.show();	
	string1 s4('*',70);
	
	}

