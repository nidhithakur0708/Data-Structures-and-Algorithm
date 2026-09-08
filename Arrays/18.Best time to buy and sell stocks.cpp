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
	int cost=0;
	for(int i=1; i<n; i++) {
		cost=arr[i]-mini;
		profit=max(profit,cost);
		mini=min(mini,arr[i]);
	}
	return profit;
}
int main()
{
	int n;
	cout<<"Enter size of the array:"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<"The max profit is: "<<maxProfit(arr,n);

	return 0;
}
