//Unioun of two sorted arrays
#include <bits/stdc++.h>
using namespace std;


int main()
{
	vector<int> a= {1,1,2,2,3,4};
	vector<int> b= {1,2,3,4,5};
	int n1=a.size();
	int n2=b.size();
	vector<int>uniounArr;
	int i=0;
	int j=0;
	while(i<n1 && j<n2) {
		if(a[i]<b[j]) {
			if(uniounArr.size()==0 || uniounArr.back()!=a[i]) {
				uniounArr.push_back(a[i]);
			}
			i++;
		}
		else {
			if(uniounArr.size()==0 || uniounArr.back()!=b[j]) {
				uniounArr.push_back(b[j]);
			}
			j++;
		}
	}
	while(j<n2) {
		if(uniounArr.size()==0 || uniounArr.back()!=b[j]) {
			uniounArr.push_back(b[j]);
		}
		j++;
	}
	while(i<n1) {
		if(a[i]>b[j]) {
			if(uniounArr.size()==0 || uniounArr.back()!=a[i]) {
				uniounArr.push_back(a[i]);
			}
			i++;
		}
	}
	// 4. Correct syntax for range-based loop
	for (int it : uniounArr) {
		cout << it << " ";
	}
	return 0;
}











