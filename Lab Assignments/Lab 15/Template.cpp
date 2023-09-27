#include<iostream>
using namespace std;

template <class T>
T add (T &a, T &b)
{
	T result = a+b;
	return result;
 } 
 
 int main()
 {
 	int i=3, j=3;
 	float m =1, n =4;
 	cout<<"addition of i&j is :"<<add(i,j);
 	cout<<"\n";
 	cout<<"addition of m&n is :"<<add(m,n);
 	return 0;
 }
