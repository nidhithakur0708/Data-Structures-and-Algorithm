// Reverse a array using recurrsion using one pointer and 2 pointer approach
#include <bits/stdc++.h>
using namespace std;

void reverse_twoPointer(int arr[],int left, int right){
    if(left>=right) return;
    int temp=arr[left];
    arr[left]=arr[right];
    arr[right]=temp;
    reverse_twoPointer(arr,left+1,right-1);
}
void reverse_onePointer(int arr[],int i,int n){
    if(i>=n/2) return;
    //swap i and n-i-1
    int temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
    reverse_onePointer(arr,i+1,n);
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // reverse_twoPointer(arr,0,n-1);
    reverse_onePointer(arr,0,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
