//Print 1 to N but by backtracking
//not using f(i+1,N)
#include <iostream>
using namespace std;

void f(int i,int n){
    if(i<1) return;
    f(i-1,n);//f(5,4)->f(4,4)->(3,4)->(2,4)->f(1,4)->f(0,4) break;
    //print i hoga in reverse 1,2,3,4.
    cout<<i<<endl;
}


int main() {
    int n;
    cin>>n;
    f(n,n);

    return 0;
}
