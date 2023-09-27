#include<iostream>
using namespace std;
// Addition of Odd and Even Number from 1-20

int main()
{
	int odd_s,even_s,sum;
	int i;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			even_s+=i;	
		}
		else
		{ 
			odd_s=odd_s+i;	
		}		
	}
	cout<<"Even Summation is: "<<even_s<<endl;
	cout<<"Odd Summation is: "<<odd_s<<endl;
	cout<<"Total Summation is: "<<odd_s+even_s<<endl;
}
