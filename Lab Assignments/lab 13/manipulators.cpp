
#include <iostream>  
#include <iomanip>  
#include <sstream>
#include <string>

using namespace std;  
  
int main()  
{  
    cout << "value is: " << setw(12) << 1235 << '\n' ; 
    cout<<"Value with('*'): "<< setfill('*')<< setw(12) << 1235<< '\n';  
    cout<<endl;
    
    double f =45.26543189;  
		  cout << setprecision(8) << f << '\n';  
		  cout << setprecision(7) << f << '\n';
		  cout << setprecision(6) << f << '\n';  
		 // cout << fixed;  
		  cout << setprecision(5) << f << '\n';  
		  cout << setprecision(4) << f << '\n';
		  cout << setprecision(2) << f << '\n';  
		 	  
	cout<<"set value : "<<setbase(2)<<9675<<'\n';	  
		  
		  
	istringstream str(" enjoy ");
    string line;
   
    getline(str >>ws, line);
 
    cout << line << endl;
    cout << "a" << endl;
    cout << "b" << endl;
 

		  
}  


