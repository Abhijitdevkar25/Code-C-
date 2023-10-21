#include<iostream>
using namespace std;

int main()
{
	int arr[11]={86,16,16,53,19,0,0,0,0,0,0};
	
	int count=0;
	for(int i=0;i<11;i++)
	{
		if(arr[i]==0)
		{
			count++;
		}
	}
	
	
	int p=0;
	//cout<<"count = "<<count<<endl;
	int brr[count];
	for(int i=0;i<11;i++)
	{
		if(arr[i]==0)
		{
			brr[i]=++p;
			//cout<<brr[i]<<"\t";
		}
	}
	
	
	int cmp=0,k=0,count2=0;
	for(int i=0;i<count;i++)
	{
		cmp=brr[i];
		for(int j=i+1;j<count ;j++)
		{
			count2++;
		}
	}

	cout<<"Total number of pairs = "<<count+count2<<endl;
	
	
	return 0;
}
