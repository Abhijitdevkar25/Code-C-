#include <iostream>
using namespace std;
int main()
{
	int i, j;
char c='A';
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
		cout<<c;
	}
	c++;
	cout<<"\n";
	}
}
