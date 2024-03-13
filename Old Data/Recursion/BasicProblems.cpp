#include <bits/stdc++.h>
using namespace std;

// Print name N times using recursion
void f(int i, int n) {
    if (i > n) {
        return;
    }
    string s = "Aman";
    cout << s << endl;
    f(i + 1, n);
}

//Print linearly from 1 to N
void f2(int i, int n) {
    if (i > n) {
        return;
    }
    cout << i << endl;
    f2(i + 1, n);
}

//Print in terms of  N to 1
void f3(int i, int n) {
    if (i < 1) {
        return;
    }
    cout << i << endl;
    f3(i - 1, n);
}

//Print linearly from 1 to N
// but can't use f(i+1,n)
// Use backtracking
void f4(int i, int n) {
    if (i < 1) {
        return;
    }
    f4(i - 1, n);
    cout << i << endl;
}

//Print in terms of N to 1
// but can't use f(i-1,n)
// Use backtracking
void f5(int i, int n) {
    if (i > n) {
        return;
    }
    f5(i + 1, n);
    cout << i << endl;
}
int main() {
    int n;
    cin >> n;
    f(1, n); 
    f2(1, n); 
    f3(n, n); 
    f4(n, n); 
    f5(1, n); 
    return 0;
}

// Time complexity -> O(N)
// Space complexity -> O(N)