#include<iostream>
using namespace std;
#include<stdlib.h>

int main()
{
	
	int arr[6][4]={{0,0,1,0},{1,1,1,1},{0,1,0,0},{0,1,0,1},{0,0,1,0},{0,0,0,0}};
	
	
	
	
	/*
	int arr[6][4];
	
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<4;j++)
		{
			arr[i][j]=rand() % (1 + 1 - 0);
		}
	}
	*/
	
	int count11[6];
	int count00[6];
	int count000[6];
	
	
	int w=1,count1=0,count0=0;
	for(int i=0;i<6;i++)
	{
		cout<<"Wing no "<<w<<" = ";
		for(int j=0;j<4;j++)
		{
			cout<<arr[i][j]<<" ";
			if(arr[i][j]==1)
			{
				count1++;
			}
			else
			{
				count0++;
			}
		}
		count11[i]=count1;
		count00[i]=count0;
		count000[i]=count0;
		count000[i]=count0;
		cout<<"\t"<<"present = "<<count11[i]<<" not present = "<<count00[i];
		count1=0;
		count0=0;
		w++;
		cout<<"\n";
	}
	
	int x,temp;
	
		x=count00[0];
		for(int d=0;d<6;d++)
		{
			if(x<count00[d])
			{
				temp=count00[d];
				count00[d]=x;
				x=temp;	
			}
		}
		cout<<endl;
		for(int p=0;p<6;p++)
		{
			if(x==count000[p])
			{
				cout<<"Maximum "<<x<<" car can stolen from the wing number = "<<++p;
				return 0;
			}
		}
}
