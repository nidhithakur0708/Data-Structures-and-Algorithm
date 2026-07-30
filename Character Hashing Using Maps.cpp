//Character Hashing Using Maps
#include <bits/stdc++.h>
using namespace std;

int main() {
    //input
    string s;
    cin>>s;
    
    //precompute
    map<char,int>mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
        //s[i]=s[n]n gets converted to integer in cpp and that key in map gets incremented
    }
    //fetch
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<mpp[c]<<endl;
    }
    return 0;
}
