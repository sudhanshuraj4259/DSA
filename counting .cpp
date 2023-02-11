#include<iostream> 
using namespace std;
// function signature
void printCounting (int num) {
    // cout<< n << endl;
    // function Body
    for (int i = 1; i<= num; i++) {
        cout << i << " ";
    }
    cout<< endl;
}
int main() {
    int n;
    cin>> n;
    // function call
     printCounting (n);
     return 0;
}