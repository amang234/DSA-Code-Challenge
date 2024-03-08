#include<bits/stdc++.h>
using namespace std;

//Factorial through functional
int factFunc(int n) {
    if(n==1) {
        return 1;
    }
    return n * factFunc(n-1);
}

// Factorial parameterised
void FactPara(int i, int sum) {
    if(i<1) {
        cout<<sum;
        return;
    }
    FactPara(i-1,sum*i);
}

int main() {
    int n;
    cin >> n;
    cout << factFunc(n) << endl; 
    FactPara(n,1);
}