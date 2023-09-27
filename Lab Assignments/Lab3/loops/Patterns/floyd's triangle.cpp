#include<iostream>
using namespace std;
int main()
{
	int i , j;
	int n =1;
	for (i = 1;i<=5;i++)
	  { 
	    for(j=1;j<=i;j++)
	    {
	    	 cout<<n<<"\t";
	    	 n++;
		}
		cout<<"\n";
	  }
}
