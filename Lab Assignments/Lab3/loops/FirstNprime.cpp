#include <bits/stdc++.h>
using namespace std;
 
// Function to generate first n primes
void generatePrime(int n)
{
    int X = 0, i = 2;
    bool flag;
    while(X < n){
        flag = true;
        for(int j = 2; j <= sqrt(i); j++){
            if (i%j == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << i << " ";
            X++;
        }
        i++;
    }
    cout << endl;
}
 
// Driver code
int main()
{
    // Test Case 1
   // int N = 4;
   int N = 50;
  
 
    // Function call
    generatePrime(N);
   
    // Test Case 2
    //N = 1;
   
    // Function call
   // generatePrime(N);
   
    return 0;
}
