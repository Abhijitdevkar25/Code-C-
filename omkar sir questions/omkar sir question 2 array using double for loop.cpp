#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,5,7,1};
	int count=0;
	int c;
	for(int i=0;i<4;i++)
	{
		c=arr[i];
		for(int j=0;j<4;j++)
		{
			if(c+arr[j]==6)
			{
				cout<<c<<" "<<arr[j]<<endl;
				count++;	
			}
		}
	}
	cout<<endl;
	cout<<count;
	return 0;
}
