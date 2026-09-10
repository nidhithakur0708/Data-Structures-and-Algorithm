// Linear Search
#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num) return i;
    }
    return -1;
}

int main() {
    int n=5;
    int arr[n];
    int num;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to find:"<<endl;
    cin>>num;
    cout<<"Element is at the index:"<<linearSearch(arr,n,num);
    return 0;
}
