#include<iostream>
using namespace std;

int main()
{
	int i,j,k=4,l,m=1,p=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<k;j++)
		{
			cout<<"\t";
		}
		//k--;
		for(l=0;l<m;l++)
		{
			cout<<"*\t";
		}
		cout<<p<<"\t";
		++p;
		for(l=0;l<m;l++)
		{
			cout<<"*\t";
		}
		for(j=0;j<k;j++)
		{
			cout<<"\t";
		}
		m=m+1;
		cout<<endl;
		k--;
	}
	return 0;
}
