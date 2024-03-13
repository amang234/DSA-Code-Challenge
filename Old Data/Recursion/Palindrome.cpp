#include<bits/stdc++.h>
using namespace std;

bool pali(int i, string &s) {
    if(i>= s.size() / 2) return true;
    if(s[i] != s[s.size() -i-1]) return false;
    return pali(i+1, s);
}

int main() {
    string s;
    cin >> s;
    cout<< pali(0, s);
    return 0;
}
// Time Complexity O(N/2)