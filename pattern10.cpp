#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i =1;

    while(i<=n) {
        int j =1;
        while(j<= n) {
              char ch = 'A' + i - 1; // here we use type casting  --  a conversion of one type to another
            cout<< ch;
            j = j+1;
        }

        cout<<endl;
        i = i+1;
    }
}