#include<bits/stdc++.h>
using namespace std;

// Multiple Recursion Calls
// Find Nth Fibonacci Number
int fibo(int n) {
    if(n<=1) return n;
    int last = fibo(n-1);
    int secLast = fibo(n-2);
    return last + secLast;
}

int main() {
    int n;
    cin >> n;
    cout << fibo(n);
}

// TC -> (2^n)  Exponential in nature