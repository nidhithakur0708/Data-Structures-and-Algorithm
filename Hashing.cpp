// Hashing
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute-make a hash array 1 more than the max array element
    //eg here we consider max element is 12
    int hash[13]={0}; //hash array starts with 0 index
    for(int i=0;i<n;i++){
        //1 2 1 3 2 is array
        //hash[arr[0]]=hash[1] that increments with 1.
        hash[arr[i]]+=1;
    }
    //q is the number of queries u run
    int q;
    cin>>q;
    while(q--){
        //number is the actual query
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }

    return 0;
}
