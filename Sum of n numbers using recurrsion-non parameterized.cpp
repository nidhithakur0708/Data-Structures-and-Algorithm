// Sum of n numbers using recurrsion-non parameterized
//The function doesnt print but returns

/*
n=3->3+f(2)->2+f(1)->1+f(0)=1+0=1->back->1+2=3->3+3=6
*/
#include <iostream>
using namespace std;

int f(int n){
    if(n==0) return 0;
    return n+f(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<f(n);

    return 0;
}
