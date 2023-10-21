#include<iostream>
using namespace std;

int main()
{
	int hourses;
	cout<<"Enter the number of hourses that u want to bet on:";
	cin>>hourses;
	
	int arr[hourses];
	cout<<"Enter the sequential prize for "<<hourses<<" hourses: "<<endl;
	for(int i=0;i<hourses;i++)
	{
		cin>>arr[i];
	}
	
	int bug;
	cout<<"Enter the budget for racing:";
	cin>>bug;
	
	
	int sum=0,count=0;
	int i=0,j=0;
	int c=0;
	int brr[hourses];
	while(i<hourses)
	{
		j=i;
		for(i;i<hourses;i++)
		{
			if(sum>=bug && c==0)
			{
			//          	cout<<"number of hourses u can take = "<<count<<endl;
				c++;
			}
			else
			{
				sum=sum+arr[i];
				if(sum<bug)
				{
					count++;	
				}
			}
		}
		brr[j]=count;
		count=0;
		c=0;
		sum=0;
		i=j;
		i++;
	}
	
	for(int p=0;p<hourses;p++)
	{
		cout<<brr[p]<<"\t";
	}
	
	int max=brr[0];
	int swap=0;
	for(int q=0;q<hourses;q++)
	{
		if(max<=brr[q])
		{
			swap=brr[q];
			brr[q]=max;
			max=swap;
		}
	}
	
	cout<<"max hourses u can take = "<<max;
}
