// Print from n to 1 but by back tracking.
/*
Back Tracking is calling function first and printing later
Means while I come back from base I should get N means  need to start with 1 and then go on increasing
f(1,4)->f(2,4)->f(3,4)->f(4,4)->f(5,4)
Print while coming back is 4 3 2 1.
Base Condition will be (i>n)
*/
#include <iostream>
using namespace std;
void f(int i,int n){
    if(i>n) return;
    f(i+1,n);
    /*f(1,4)->f(2,4)->f(3,4)->f(4,4)->f(5,4)(Base Condition)
    print backwards 4 3 2 1*/
    cout<<i<<endl;
}

int main() {
    int n;
    cin>>n;
    f(1,n);

    return 0;
}
