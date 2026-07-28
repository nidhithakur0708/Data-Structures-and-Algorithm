// Sum of n numbers using recurrsion-parameterized
/*
f(3,0)->f(2,3)->f(1,5)->f(0,6) prints 6 and done
*/
#include <iostream>
using namespace std;
void f(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    f(i-1,sum+i);
}
int main() {
    int n;
    cin>>n;
    f(n,0);
    return 0;
}
