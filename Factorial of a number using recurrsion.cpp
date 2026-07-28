//Factorial of a number using recurrsion
/*Factorial of n
n=3->1x2x3=6
now f(3)=3*f(2);             //6
f(2)=2*f(1);                 //2
f(1)=1*1(f(0));              // now go back if(n==0) return 1 ->1
*/
#include <iostream>
using namespace std;
int f(int n){
    if(n==0) return 1;
    return n*f(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<f(n);

    return 0;
}
