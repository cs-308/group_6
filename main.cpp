#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    int x = 56 , y = 98;
    cout<<gcd(x,y)<<"\n";
    cout<<"\n";
    cout<<"The factorial of 5 is "<<factorial(5)<<"\n";
    return 0;
}
