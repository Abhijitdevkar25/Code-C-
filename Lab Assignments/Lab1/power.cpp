#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int base,exp,result;
	cout<<"enter base"<<endl;
    cin>> base;
	cout<<"enter exp"<<endl;
	cin>> exp;
	result=pow(base,exp);
	cout<<"result is " << result<<endl; 
	return 0;
}
