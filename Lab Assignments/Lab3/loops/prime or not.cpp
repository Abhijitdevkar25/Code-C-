#include <iostream>
using namespace std;

int main() {

  int n, i, flag = 0 ;
  cout<<"Enter a positive integer: "<<endl;
  cin>>n;

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      cout<<"The entered number is not prime"<<endl;
      break;
    }
    
  }
  if (flag == 0)
    {
         cout<<"entered number is prime" <<endl;
         
	}
	
}
