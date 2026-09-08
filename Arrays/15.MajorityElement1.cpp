/***************************************************************************
Majority Element1-if the element appears more than n/2 times it is Majority
Moores Voting algo
el
count
-if you get el you increase counter if u get other u decrease counter
-If your counter gets to 0,you make a new element
-then you that the el is more then n/2 times
*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[],int n) {
	int el;
	int count=0;
	for(int i=0; i<n; i++) {
		if(count==0) {
			count=1;
			el=arr[i];
		}
		else if(arr[i]==el) {
			count++;
		}
		else {
			count--;
		}
	}
	//Check if el is actually Majority count >n/2
	int count1=0;
	for(int i=0; i<n; i++) {
		if(arr[i]==el) {
			count1++;
		}
	}
	if(count1>(n/2)) {
		return el;
	}
	return -1;
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

	cout<<majorityElement(arr,n);


	return 0;
}
