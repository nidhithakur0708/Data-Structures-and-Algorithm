// Print N to 1 using recurrsion
/*
Now i has to start from N,
i has to go in minus
base condition is i<1
*/
#include <iostream>
using namespace std;

void f(int i,int n){
    if(i<1) return;
    cout<<i<<endl;
    f(i-1,n);
}

int main() {
    int n;
    cin>>n;
    f(n,n);
    return 0;
}
