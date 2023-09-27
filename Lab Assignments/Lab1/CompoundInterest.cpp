#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float p, r, t, Comp, amount;
    
    
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the rate of interest: ";
    cin >> r;
    cout << "Enter the time period in years: ";
    cin >> t;
    
    
    amount = p * (pow((1 + r/100), t));
    
    Comp = amount - p;
    
    
    cout << "Compound interest is = " << Comp << endl;
    return 0;
}
