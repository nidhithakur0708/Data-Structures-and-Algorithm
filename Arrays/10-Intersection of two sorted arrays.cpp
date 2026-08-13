//Unioun of two sorted arrays
#include <bits/stdc++.h>
using namespace std;


int main()
{
	vector<int> a= {1,1,2,2,3,4};
	vector<int> b= {1,2,3,4,5};
	vector<int>ans;
	int n1=a.size();
	int n2=b.size();
	int i=0;
	int j=0;
	while(i<n1 && j<n2){
	    if(a[i]<b[j]){
	        i++;
	    }
	    if(a[i]>b[j]){
	        j++;
	    }
	    else{
	        ans.push_back(a[i]);
	        i++;
	        j++;
	    }
	}
	for(int it:ans){
	    cout<<it<<" ";
	}
	return 0;
}











