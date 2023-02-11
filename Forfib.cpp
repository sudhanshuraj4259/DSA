#include<iostream>
using namespace std;

int main() {
    int n = 10;
    int a = 0;
    int b = 1;
    cout<<a << " " <<b<<" ";
    for(int i =1; i<=n; i++){
        int nextNumber = a+b;
        cout<<nextNumber<<" ";

        a=b;
        b = nextNumber;
    }
} 
// 0,1,2,3,4,5,6,7,8,
// a=0  ,  b= 1;
// a=b;
// b = f (nextNumber)