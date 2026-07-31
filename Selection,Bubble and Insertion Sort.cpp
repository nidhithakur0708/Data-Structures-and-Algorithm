//Selection,Bubble and Insertion Sort
#include <bits/stdc++.h>
using namespace std;
//6 4 3 2 5
void selectionSort(int arr[],int n){
    //selects the minimum element and brings that to the front
    //Outer loop from 0 to n-1 but not equal to it because 1 element is already sorted
    for(int i=0;i<n-1;i++){
        //inner loop from j=i to last
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}
//Bubble Sort-Bubbles the maximum element to the last by swapping 
void bubbleSort(int arr[],int n){
    //In the last outer loop only one element will be left
    for(int i=0;i<n-1;i++){
        //inner loop j=0 se j<n-i because peeche ke i elements are sorted and -1 because nahi tho out of bound hojayega for last element
        //5-0-1=4 so loops go till i=0 to i=3,for i=0
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
//Insertion Sort-Takes thoda thoda array and sorts that places the elemnt in the right position and then take thoda more aise pura array they sort
void insertionSort(int arr[],int n){
    //outer loop-puraaa array jayegaaa because puraa arrayy lena hai part part mai
    for(int i=0;i<n;i++){
        //aab ek chunk milne ke baad last wale element ko sahi position mai dalna hai ,j ko i jahaa hai wahaa se start karo aur peeche aao and swap maro
        int j=i;
        while(j>=0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
        
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // selectionSort(arr,n);
    // bubbleSort(arr,n);
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
