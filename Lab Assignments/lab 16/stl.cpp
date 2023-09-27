
#include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{  
    vector<char> v;  
    v.push_back('p');  
    v.push_back('y');  
    v.push_back('t');  
    v.push_back('h'); 
	v.push_back('o'); 
	v.push_back('n');  
	
    for(int i=0;i<v.size();i++)  
       {
   	    cout<<v[i];
        cout<<endl;
       }
	v.pop_back(); 
	v.pop_back(); 
	v.pop_back();  
	
     for(int i=0;i<v.size();i++)  
         cout<<v[i];
}  

