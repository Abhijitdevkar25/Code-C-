#include<iostream>
#include <string>

using namespace std;

int main()
{
// unary operator :

	int i,a,b;
	cout<<"enter i, a and b"<<endl;
	cin>>i>>a>>b;
	cout<<i++<<endl;		
	cout<<i--;
	
//arithmetic operators :
	
	int sum= a+b;
	int sub= a-b;
	int mul= a*b;
	int mod= a%b;
	int div= a/b;
	
 	  cout<<"sum is "<<sum<<endl;
	  cout<<"subtraction is "<<sub<<endl;
	  cout<<"multiplication is "<<mul<<endl;
 	  cout<<"modulus is "<<mod<<endl;	
	  cout<<"division is "<<div<<endl;		
}


/* 
int main()
{
  int x=4,y;
  y = ++x;
  cout<<"PreIncrement:Value of x = "<<x<<endl;
  cout<<"PreIncrement:Value of y = "<<y<<endl;
 
  y = x--;
  cout<<"PostDecrement:Value of x = "<<x<<endl;
  cout<<"PostDecrement:Value of y = "<<y<<endl;
}
*/


/*

//logical operators :

int main()
{
  int a=53, b=6,c=22,d=44;
 
  if(!(a==0))
     cout<<"a is not zero"<<endl;
  else
    cout<<"a is zero"<<endl; if((a>b)&&(c<d))
        cout<<"Logical AND is true"<<endl;
  else
       cout<<"Logical AND is false"<<endl;
 
 if((a<c)||(b<d))
     cout<<"Logical OR is true"<<endl;
 else
     cout<<"Logical OR is false"<<endl;
}
*/


/*

//relational operators :
 
int main()
{
  int a=53, b=6,c=22,d=44;
 
  if(a==b)
     cout<<"a is equal to b"<<endl;
  else
    cout<<"a is not equal to b"<<endl;
 
  if(c!=d)
     cout<<"c is not equal to d"<<endl;
  else
    cout<<"c is equal to d"<<endl;
 
  if((a+b) <= (c+d))
      cout<<" (a+b) less than/equal to (c+d)"<<endl; 
  if((a-b)>=(d-c))
     cout<<"(a-b) greater than/equal to (d-c)"<<endl;
}
*/


/*

//bitwise operators :

int main()
{
  int a=20,b=8,c;
   
  c = a&b;
  cout<<"Result of & : "<<c<<endl;
  c = a|b;
  cout<<"Result of | : "<<c<<endl;
  c = a^b;
  cout<<"Result of ^ : "<<c<<endl;
   
  c = a<<2;
  cout<<"Result of << by 2 bits : "<<c<<endl;
  c = b>>2;
  cout<<"Result of >> by 2 bits : "<<c<<endl;
   
  c = ~3;
  cout<<"Result of ~ : "<<c<<endl;
}
*/



/*

//pre increment and decrement :
 
int main()
{
  int x,y;
  cout<<"Enter input variable y: \n"; 
  cin>>y;
  x = y;
  cout<<"Value of x = "<<x<<endl;
   
  int a = 45,b = 40,c = 70;
  a += b;
  c -= b;
  cout<<"\na += b: "<<a;
  cout<<"c -= b: \n"<<c;
   
  a *= b;
  b /= c;
  cout<<"\na *= b: "<<a;
  cout<<"\nb /= c: "<<b;
   
  return 0;
  }

*/



/*
//coditional operators :

int main()
{
  int x,y;
  
  x = (y=3,y+4);
  cout<<"Value of x = "<<x;
  
  y = (x<5)?0:1;
  if(y == 0)
    cout<<"\nVariable x is less than 5"<<endl;
  else
    cout<<"\nVariable x is greater than 5"<<endl;
  
    cout<<"sizeof(x): "<<sizeof(x)<<"\t"<<"sizeof(y): "<<sizeof(y);
  
  return 0;
 
}
*/
