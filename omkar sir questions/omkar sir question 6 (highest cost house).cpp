#include<iostream>
using namespace std;

int main()
{
	int house;
	cout<<"Enter the number of houese "<<endl;
	cin>>house;
	
	int arr[house];
	int brr[house];
	int i;
	cout<<"Enter the prize in laks for each "<<house<<" houses : ";
	for(i=0;i<house;i++)
	{
		cin>>arr[i];
		brr[i]=arr[i];
	}
	
	
//	for(i=0;i<house;i++)
//	{
//		cout<<brr[i]<<"\t";
//	}
//	
	
	int temp,k=0;
	temp=arr[1];
	for(i=1;i<house-1;i++)
	{
		if(temp<=arr[i])
		{
			k=temp;
			temp=arr[i];
			arr[i]=k;
		}
	}
	//cout<<"\n"<<temp;
	cout<<endl;
	for(i=1;i<house-1;i++)
	{
		if(temp==brr[i])
		{
			cout<<"u can take house number "<<(i+1)<<" having highest cost = "<<temp;
			return 0;
		}
	}
	
	
	return 0;
}
