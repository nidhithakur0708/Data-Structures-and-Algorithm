/*
1.Binary Iterative

->low=0 high=n-1 mid=low+high/2 
->If target>mid then low=mid+1 and high is there only
->If mid>target then high=mid-1 and low is there only

->The loop breaks when low<high they cross

2.Binary Recursive
->Same Approach but in Recursive functions
*/

#include <bits/stdc++.h>
using namespace std;

// 1.Iterative Approach
int binaryIterative(vector<int>& arr, int n, int target) {
    int low = 0;
    int high = n - 1;
    
    while (low <= high) { 
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) return mid;
        else if (target > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

// Helper function for recursion
int binaryRecursionFunction(vector<int>& arr, int low, int high, int target) {
    if (low > high) return -1; 
    int mid = low + (high - low) / 2;
    
    if (arr[mid] == target) return mid;
    else if (target > arr[mid]) {
        return binaryRecursionFunction(arr, mid + 1, high, target); 
    } else {
        return binaryRecursionFunction(arr, low, mid - 1, target); 
    }
}

// 2.Recursive Wrapper
int binaryRecursion(vector<int>& arr, int n, int target) {
    int low = 0;
    int high = n - 1;
    return binaryRecursionFunction(arr, low, high, target);
}

int main() {
    int n;
    cout << "Enter the size:" << endl;
    cin >> n;
    
    vector<int> arr(n, 0);
    
    cout << "Enter the sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int target;
    cout << "Enter target:" << endl;
    cin >> target;
    
    // cout << "Iterative Result: " << binaryIterative(arr, n, target) << endl;
    cout << "Recursive Result: " << binaryRecursion(arr, n, target) << endl;

    return 0;
}
