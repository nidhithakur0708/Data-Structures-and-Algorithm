/******************************************************************************
Best time to Buy and Sell Stocks:
You start from i=1 and assign a[0]=mini
You remove cost=arr[i]-mini
Your profit is 0
You take max from it max(profit,cost)
Then you reassign mini min(mini,a[i])

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int maxProfit(int arr[],int n) {

	int mini=arr[0];
	int profit=0;
	for(int i=0; i<n; i++) {
		int cost=arr[i]-mini;
		int profit=max(profit,cost);
		mini=min(mini,a[i]);
	}
}
int main()
{
	int n;
	cout<<"Enter size of the error"<<endl;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<maxProfit(arr,n);

	return 0;
}
