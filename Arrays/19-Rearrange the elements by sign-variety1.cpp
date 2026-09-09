/******************************************************************************
Rearrange the elements by sign
->We are given a array of equal positive and negative elements
->We need to rearrange it in alternate fashion positive and negative

Approach-We take a vector of the same size
->we take 2 points pos=0 and neg=1,as pos is always at even and neg is at odd index
->Now we run a for loop if it is <0 it is assigned at ans[neg] and +=2 and pos in
similar manner
*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

void rearrangeArray(int arr[],int n){
    vector<int>ans(n,0);
    int pos=0;
    int neg=1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[neg]=arr[i];
            neg+=2;
        }else{
            ans[pos]=arr[i];
            pos+=2;
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    
    cout<<"Enter the array:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    rearrangeArray(arr,n);
    
}
