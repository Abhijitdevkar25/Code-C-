#include <iostream>
using namespace std;
int main()
{
	 int i; int n; int fact=1;
	 cout<<"enter the number"<<endl;
	 cin>>n;
	 for(i=1;i<=n;i++)
	  {
	  	  fact = fact*i; 
	  }
	  cout<<"factorial of given number is ="<<fact<<endl;
	  
	  return 0;
	  }
