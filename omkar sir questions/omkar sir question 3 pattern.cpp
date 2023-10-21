#include<iostream>
using namespace std;


int main()
{
	int arr[9]={5,11,6,12,8,7,9,13,17};
	
	for(int i=0;i<3;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	
	for(int i=5;i>=3;i--)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	
	for(int i=6;i<9;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	
	
	return 0;
}
