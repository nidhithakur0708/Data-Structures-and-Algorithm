// Check if sorted and rotated
//Check sorted
#include <bits/stdc++.h>
using namespace std;


//Logic-if it is sorted and rotated there is only place where arr[i]<arr[i+1] actually sorted logic will be false
//arr[i]>arr[(i+1)%n] because of the circular thing %n

//Because the array is rotated, the end of the array wraps around to the beginning. To capture every adjacent pair (including the last element wrapping around to the first), think of the index comparison using modulo: nums[i] > nums[(i + 1) % n]
bool checkSortedRotated(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[(i+1)%n]){
            count++;
        }
    }
    return count<=1;
}
bool checkSorted(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<checkSortedRotated(arr,n);
    cout<<checkSorted(arr,n);
    return 0;
}
