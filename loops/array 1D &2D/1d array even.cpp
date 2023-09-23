#include<iostream>
using namespace std;

int main()
{
	int a[5]; int b[5]; int i; 
	cout<<"enter 5 elements";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}

for(i=0;i<5;i++)
{
	if(a[i]%2==0){
	
	b[i]=a[i];
	cout<<b[i]<<" ";
}
}
}
