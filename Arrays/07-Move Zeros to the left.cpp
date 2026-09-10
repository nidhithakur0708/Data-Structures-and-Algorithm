//Move Zeros to the left
#include <bits/stdc++.h>
using namespace std;

void moveZeroLeft(int arr[],int n){
    //1.Start j at first 0
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    //2.Start i from j+1 and swap if non zero and then j++ and again check
    for(int i=j+1;i<n;i++){
        if (arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    moveZeroLeft(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
