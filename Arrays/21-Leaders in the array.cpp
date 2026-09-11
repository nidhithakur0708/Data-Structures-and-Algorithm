/********************************************************************
Leaders in the array-when there is no greater element in the right

Brute:You put i at one place in the array and then you start j from i+1 and check if the elements are greater if yes then you push it 

Optimal:You make a maxi=Int_min and you start from end and then u reverse traverse and if it is greater then max u make that maxi and push in the answer array
******************************/

#include <bits/stdc++.h>
using namespace std;

vector<int>leaderArrayBrute(vector<int>&arr,int n) {
	vector<int>ans;
	for(int i=0; i<n; i++) {
        bool isLeader=true;
		for(int j=i+1; j<n; j++) {
			if(arr[j]>arr[i]) {
                isLeader=false;
				break;
			}
		}
		if(isLeader==true) {
			ans.push_back(arr[i]);
		}
	}
	return ans;
}

vector<int>leaderArrayOptimal(vector<int>&arr,int n){
    int maxi=INT_MIN;
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
	int n;
	cout<<"Enter size of the array:"<<endl;
	cin>>n;

	vector<int>arr(n,0);
	cout<<"Enter the array:"<<endl;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	vector<int> ans = leaderArrayOptimal(arr, n);
	for(auto it:ans) {
		cout<<it<<" ";
	}

	return 0;
}
