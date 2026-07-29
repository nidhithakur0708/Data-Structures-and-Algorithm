//Print nth fibonaci with multiple recurrsion
/*
Now f(n)=f(n-1)+f(n-2)
And we now that f(1)=1 f(0)=0 hence if (n<=1) return n;
And baaki ka f(n-1)+f(n-2).
*/
#include <iostream>
using namespace std;
int fib(int n){
    if(n<=1) return n;
    int last=fib(n-1);
    int slast=fib(n-2);
    return last+slast;
}
int main() {
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}
