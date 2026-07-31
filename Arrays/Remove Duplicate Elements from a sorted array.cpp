//Remove Duplicate Elements from a sorted array
#include <bits/stdc++.h>
using namespace std;
/*
2 pointer approach:
->start at i=0
->start looping from j=1 to the end
->if arr[j]!=arr[i] then i+1 position will be taken by j 
->then j++
->then for size i will return i+1 ,because where i is ,is the sorted array
*/
int removeDuplicates(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<removeDuplicates(arr,n);

    return 0;
}
