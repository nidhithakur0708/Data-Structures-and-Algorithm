/***************************************************************************
Maximum Subarray-return the maxium sum a sub array can give you

We use Kadanes Algo-
In a for loop you keep adding elements to the sum
-if sum gets less than 0 you dont add that element
-if the sum still remains positive u add that to the sum
*******************************************************************************/


#include <bits/stdc++.h>
using namespace std;

int maximumSubarray(int arr[],int n) {
	int maxi=INT_MIN;
	int sum=0;
	for(int i=0; i<n; i++) {
		sum+=arr[i];
		if(sum>maxi) {
			maxi=sum;
		}
		if(sum<0) {
			sum=0;
		}
	}
	return maxi;
}

int main()
{
	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;

	int arr[n];
	cout<<"Enter array:"<<endl;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	cout<<"The sum of maximum subarray is:"<<maximumSubarray(arr,n);

	return 0;
}
