#include<iostream>
using namespace std;

float division(int x,int y){
	if(y==0){
		throw "Attempted to divide by zero ";
		
	}
	return (x/y);
}
int main(){
	int i ,j;
	float k;
	try
	{
		cout<<"enter the dividend: ";
		cin>>i;
		cout<<"enter the divisor: ";
		cin>>j;
		k= division(i,j);
		cout<<k<<endl;
	}
	catch(const char* e)
	{
		cout<<e<<endl;
	}
	
	cout<<"end of main"<<endl;
	return 0;
}
