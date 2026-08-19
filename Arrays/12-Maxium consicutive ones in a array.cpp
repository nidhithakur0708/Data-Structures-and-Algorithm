//Maxium consicutive ones in a array

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxOnes(vector<int>arr) {
    int count = 0;
    int maxi = 0;
    int n = arr.size();
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            count++;
            maxi = max(count, maxi);
        } else {
            count = 0;
        }
    }
    return maxi;
}

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    cout << maxOnes(arr);
    return 0;
}
