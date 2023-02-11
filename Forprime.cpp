#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<" Enter the value of n" << endl;
    cin>>n;

    bool isprime = 1; // 1 means true 0 means false
    for(int i = 2; i<n; i++){
        //rem = 0, Not a prime
        if(n%i == 0) {
            // cout << " Not a prime number" << endl;
            isprime = 0;
            break;
        }
    }

    if(isprime ==0) {
        cout<< " Not a prime number" << endl;
    }
    else 
    {
        cout<< " is a prime Number " << endl;
    }
}