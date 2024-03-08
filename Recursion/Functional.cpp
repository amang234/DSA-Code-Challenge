#include<bits/stdc++.h>
using namespace std;
// functional
// say n=3 then f(3) = 3 + f(2)
// f(2) = 2 + f(1)
// f(1) = 1 + f(0)  ; f(0) = 0
int func(int n) {
    if(n==0) {
        return 0;
    }
    return n + func(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << func(n);
}