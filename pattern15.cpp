// agar tringular pattern h to
 // i goes to 1 to n  and j goes to 1 to i and formula = 'A' +i + j -2

   #include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i =1;

    while(i<=n) {
        int j =1;
        while(j<= i) {
              char ch = 'A' + i + j -2 ; // here we use type casting  --  a conversion of one type to another
            cout<< ch << " ";
            j = j+1;
        }

        cout<<endl;
        i = i+1;
    }
}