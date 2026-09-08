/***************************************************************************
Maximum Subarray-return the maxium sum a sub array can give you

We use Kandanes Algo-
In a for loop you keep adding elements to the sum
-if sum gets less than 0 you dont add that element
-if the sum still remains positive u add that to the sum
*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

void printMaxSubArray(int arr[],int n){
    int ansStart=-1;
    int ansEnd=-1;
    int maxi=INT_MIN;
    int sum=0;
    int start=0;
    
    for(int i=0;i<n;i++){
        
        if(sum==0){
            start=i;
        }
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum==0){
            sum=0;
        }
    }
    for(int i=ansStart;i<=ansEnd;i++){
        cout<<arr[i]<<" ";
    }
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

	printMaxSubArray(arr,n);

	return 0;
}
