#include <iostream>

using namespace std;
#include <string.h>

class string1
{
	 int len;
	 char* ptr;
	 public:
	 	 void string1display();
	 	 string1(char*);
	 	 ~string1();
};
string1::string1(char* ptr1)
{
	 len = strlen(ptr1);
	 ptr =new char[len+1];
	 strcpy(ptr ,ptr1);
}
string1::~string1()
{ 
  cout<<"destructor is called\n";
     if(ptr)
     delete[] ptr; //delete operator implicitly calls destructor
    ptr = NULL;
    
}
void string1::string1display()
{
	 cout <<"lenth is :"<<len<<endl;
	 cout <<"string is :"<<ptr<<endl;
}
 int main()
 {
 	 string1 c1("kranti");
 	 c1.string1display();
  	{
  		string1 c2(c1);
  		c2.string1display();
    	c2.~string1();
	} 
c1.string1display();	 
 }
 
