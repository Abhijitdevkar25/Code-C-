#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,5,7,1};
	int count=0;
	int c,j;
	for(int i=0,j=0;i<4;i++)
	{
		c=arr[i];
		
		if(c+arr[j]==6)
		{
			cout<<c<<" "<<arr[j]<<endl;
			count++;
		}
		if(c+arr[j+1]==6)
		{
			cout<<c<<" "<<arr[j]<<endl;
			count++;
		}
		if(c+arr[j+2]==6)
		{
			cout<<c<<" "<<arr[j]<<endl;
			count++;
		}
		if(c+arr[j+3]==6)
		{
			cout<<c<<" "<<arr[j]<<endl;
			count++;
		}	
	}
	cout<<endl;
	cout<<count;
	return 0;
}
