//Find missing number in range of 0 to N
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     vector<int> arr = {0, 1, 3, 4};
//     int n = arr.size();
//     int xor1 = 0;
//     int xor2 = 0;
    
//     for(int i = 0; i <= n; i++){
//         xor1 = xor1 ^ i;
//     }
//     for(int i = 0; i < n; i++){
//         xor2 = xor2 ^ arr[i];
//     }
//     cout << (xor1 ^ xor2);
//     return 0;
// }

//Find missing number in range of 1 to N
int main()
{
    vector<int> arr = {2, 1, 3, 4};
    int n=arr.size()+1;
    int sum1=(n*(n+1)/2);
    int sum2=0;
    for(int i=0;i<arr.size();i++){
        sum2+=arr[i];
    }
    cout<<(sum1-sum2);
    return 0;
}
