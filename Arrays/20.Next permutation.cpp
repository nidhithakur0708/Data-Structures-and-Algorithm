// Next permutation
/*
1.Next permutation if in a sorted order
Algo apporach:
1.You need to find the next longer prefix match
->for this u find the number who has larger element in the right because u need to find the next
//element that is larger only
->You create index there
2.Then u swap that with the smallest remaining number next to keep the whole number close
3.Then you reverse the remaining numbers after index so that it becomes more smaller and hence closer

*/
#include <bits/stdc++.h>
using namespace std;

vector<int>& nextPermutation(vector<int>& arr, int n) {
    // Step 1: Find the break point where arr[i] < arr[i+1]
    int index = -1;
    for(int i = n - 2; i >= 0; i--) { // Fixed i++ to i--
        if(arr[i] < arr[i + 1]) {
            index = i;
            break;
        }
    }
    
    // If no break point exists, the array is strictly descending; reverse it
    if(index == -1) {
        reverse(arr.begin(), arr.end());
        return arr; // Fixed empty return
    }
    
    // Step 2: Find the smallest element greater than arr[index] from the right
    for(int i = n - 1; i > index; i--) {
        if(arr[i] > arr[index]) { // Fixed < to >
            swap(arr[i], arr[index]);
            break;
        }
    }
    
    // Step 3: Reverse the remaining elements after index
    reverse(arr.begin() + index + 1, arr.end());
    return arr;
}

int main() {
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    
    vector<int> arr(n, 0); // Fixed vector initialization
    cout << "Enter array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    nextPermutation(arr, n);
    
    cout << "Next permutation:" << endl;
    for(auto it : arr) {
        cout << it << " ";
    }

    return 0;
}
