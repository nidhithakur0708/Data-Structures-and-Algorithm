//Left rotate by d places
#include <bits/stdc++.h>
using namespace std;
void leftRotateByd(int arr[],int n,int d){
    d=d%n;
    int temp[d];
    //1.Store the d places in temp
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    //2.shift the remaining from i=d and shift them to i-d places
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    //3.now the last d that is (n-d) places are empty fill them with temp array
    int j=0;
    for(int i=n-d;i<n;i++){
        arr[i]=temp[j];
        j++;
    }
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cout<<"Enter value of d"<<endl;
    cin>>d;
    leftRotateByd(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
