#include<iostream>
using namespace std;

void printArray(int arr[], int n){
  for(int i =0; i<n; i++) {
     cout<<arr[i] <<" ";
  } cout<<endl;
}

void swapAlternate(int arr[], int size) {     // i=i+2 isliye kiye qki hmko alternate swap krna tha i+1 krne pe next pe chle jate but usko to swap krna tha 
    for(int i = 0; i<size; i=i+2){
          if(i+1 < size) {
            swap(arr[i],arr[i+1]);
          }
    }
}
int main(){

    int even[8]={5,2,9,4,7,6,1,0};
    int odd[5]={7,9,4,6,2,};

    swapAlternate(even, 8);
    printArray(even,8);

    cout<<endl;

    swapAlternate(odd,5);
    printArray(odd,5);
    
    return 0;
}