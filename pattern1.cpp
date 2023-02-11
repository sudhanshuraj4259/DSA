#include<iostream>
using namespace std;

int main(){
     int n;
     cin>>n;
      

      int i =1; // i meansrow

      while ( i<=n) {
           int j = 1;   //j means col
            while (j<=n) {
                cout<< "*";

                j=j+1;

            }
            cout << endl;

            i = i+1;
                    
      }
      return 0;
}