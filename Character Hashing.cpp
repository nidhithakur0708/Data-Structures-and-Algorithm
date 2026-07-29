//Character Hashing 1.All characters 256 size array 2.only lower case 26 characters
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    // Precompute in case of all characters
    // int hash[256] = {0};
    // for(int i = 0; i < s.size(); i++) {
    //     hash[s[i]]++;
    // }
    
    //Precomute in case of lower characters
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    
    int q;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;

        // Fetch all character
        // cout << hash[c] << endl;
        
        //Fetch from lower case
        cout<<hash[c-'a']<<endl;
    }

    return 0;
}
