/******************************************************************************
Binary Search 02-Lower Bound

Lower Bound?
Lower Bound is the smallest index where arr[i]>=x

How do you find lb?
->You apply binary Search
->low=0,high=n-1,mid=low+high/02 and answer=n(because that is the ans if the x is greater than array only)
->Then if arr[mid]>x,it is a possible lower bound but you need to find smallest
you go to the left,ans=mid and high=mid-1
->else if arr[mid]<x you find in you right side and low=mid+mid-1
->and wahaa bhi you dont get then return ans=n which had you last index

->Just ask bada or equal hai and go on ....hehehehehe
*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;


int lowerBound(vector<int>&arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            high=mid-1;
            ans=mid;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the array:"<<endl;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want lowerBound for:"<<endl;
    cin>>x;
    cout<<lowerBound(arr,n,x);

    return 0;
}
