/******************************************************************************
Two sum Problem
*******************************************************************************/
//Better Apprach-to return the indexes of the 2 sum
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&v,int target){
    map<int,int>mpp;
    int n=v.size();
    for(int i=0;i<n;i++){
        int num=v[i];
        int moreNeeded=target-v[i];
        
        if(mpp.find(moreNeeded)!=mpp.end()){
            return{mpp[moreNeeded],i};
        }
        mpp[num]=i;
    }
    return{-1,-1};
}

//Optimal Approach-But cant return the indexes
bool isTwoSum(vector<int> v,int target){
    sort(v.begin(),v.end());
    int n=v.size();
    int left=0;
    int right=n-1;
    while(left<right){
        int sum=v[left]+v[right];
        if(sum==target){
            return true;
        }
        else if(sum<target) left++;
        else right--;
    }
    return false;
}

int main()
{
    vector<int>v={2,6,8,5,11};
    int target=14;
    
    // vector<int> result=twoSum(v,target);
    // cout << "Indices: " << result[0] << ", " << result[1] << endl;
    
    cout<<isTwoSum(v,target);

    return 0;
}
