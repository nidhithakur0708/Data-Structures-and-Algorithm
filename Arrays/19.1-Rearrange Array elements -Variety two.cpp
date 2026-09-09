/****************************************************************************
Rearrange Array elements -Variety two
Here the number of positives and negatives are not equal
You need to put the extra elements in the last after the alternate pattern

Now u take 2 arrays 
pos 
neg
You fill them

Now it pos>neg
You start from i=0 till neg.size()->smaller array
You place pos in even place
You place neg in odd place

then now u need to add the extra elements
You start from neg.size() till pos.size() ,because in the for above u did 0 to 
neg.size()
then now u keep a index=neg.size()*2 because this is the size filled
and then u start from arr[index]=pos[i] to fill the remaining

Now for neg>pos
opposite of what u did above...

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

void rearrangeArray(int arr[],int n) {
	vector<int>pos,neg;
	//1.put the elements in the repective array
	for(int i=0; i<n; i++) {
		if(arr[i]<0) {
			pos.push_back(arr[i]);
		} else {
			neg.push_back(arr[i]);
		}
	}

	//positives are greater than negatives
	if(pos.size()>neg.size())
	{
		for(int i=0; i<neg.size(); i++) {
			arr[i*2]=pos[i];
			arr[i*2+1]=neg[i];
		}
		//now fill the remaining positives
		int index=neg.size()*2;
		for(int i=neg.size(); i<pos.size(); i++) {
			arr[index]=pos[i];
			index++;
		}
	}

	//same but opposite thing
	//negatives are greater than positives
	else
	{
		for(int i=0; i<pos.size(); i++) {
			arr[i*2]=pos[i];
			arr[i*2+1]=neg[i];
		}
		//now fill the remaining negatives
		int index=pos.size()*2;
		for(int i=pos.size(); i<neg.size(); i++) {
			arr[index]=neg[i];
			index++;
		}
	}
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}

}

int main()
{
	int n;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;

	cout<<"Enter the array:"<<endl;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	rearrangeArray(arr,n);

	return 0;
}
