// Left/right rotate array by 1
#include <bits/stdc++.h>
using namespace std;
    void leftRotateByOne(int arr[],int n){
        int temp=arr[0];
        for(int i=0;i<n;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
void rightRotateByOne(int arr[],int n){
    /*
    if arr is 12345 right rotation is 1234_,store 5 in temp
    Now if u go i=0 i<n i++ and arr[i+1]=arr[i] 1 comes in 2 position and overides whole array as 1
    so we go ulta i=n-1 i>0 i++
    arr[i]=arr[i-1]
    */
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // leftRotateByOne(arr,n);
    rightRotateByOne(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
