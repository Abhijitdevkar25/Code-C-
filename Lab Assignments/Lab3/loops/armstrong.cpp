#include <iostream>
using namespace std;
int main()
{ int no, sum,  rem;
cout<<"enter the number"<<endl;
cin>>no;
 int orgno = no;
	 while(no !=0)
	 {
	 	rem = no%10;
	 	no= no/10;
	 	sum = sum + rem*rem*rem;
	 }
	 if( sum== orgno)
	 
	 cout<<"It is an armstrong number"<<endl;
	 else
	 cout<<" It is not an armstrong number"<<endl;
	  return 0;
	  }
