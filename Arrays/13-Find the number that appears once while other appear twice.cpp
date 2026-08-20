// Find the number that appears once while other appear twice
//Here we know that xor of 2 numbers is always zero,hence we can xor all the numbers and the number that is left is the answer

#include <bits/stdc++.h>
using namespace std;


int appearOnce(int arr[],int n){
    int xxor=0;
    for(int i=0;i<n;i++){
        xxor=xxor^arr[i];
    }
    return xxor;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<appearOnce(arr,n);
    

    return 0;
}
