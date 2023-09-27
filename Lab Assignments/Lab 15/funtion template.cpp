#include <iostream>  
using namespace std;  
template<class X>
 void fun(X a)  
{  
    cout << "Value of a is : " <<a<<endl;  
}  
template<class X,class Y>
fun(X b ,Y c)  
{  
    cout << "Value of b is : " <<b<< endl;  
    cout << "Value of c is : " <<c<< endl;
	return b+c;  
}  
int main()  
{  
   fun(40);  
   cout<<fun(50.5,10);  
   return 0;  
}  

