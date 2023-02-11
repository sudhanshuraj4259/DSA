#include<iostream>
using namespace std;
// 0 -> not a prime 
// 1 -> prime no
bool isprime ( int n ) {
    for (int i =2; i< n; i++) {
        if (n%i == 0) {
            // divide hogya h , not a prime 
            return 0;
        }
    }
    return 1;
}
int main () {
    int n ;
    cin >> n;
    if (isprime(n)){
        cout<<" is a prime number " << endl;
    }
    else {
        cout<< " Not a prime number" << endl;
    }
}