#include<iostream>
using namespace std;

int getpivot(int arr[], int n) {
    int s =0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {
        if (arr[mid] >= arr[0] ) {
           s = mid+1;
        }
        else {
            e = mid; 
            // e = mid-1 nahi kiye q ki agar graph ke second line ke last me povit hoga tb to wo first line me aa jayega or s bhi first line pe or rnd bhi first line pe aa jayega that why e = end;

        }

        mid = s + (e-s)/2;
    }
    return s ;
    // yaha return e bhi kr slta h q ki dono no me same hi return hi rhega no to koe fark nahi prta h ki return s kr rhe ho ki e ;
}

int main() {
    int arr[5] = { 8,10,17,1,3};
    cout<<"pivot is " << getpivot(arr,5) << endl;
}