#include <bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you
// Fuctions are used to modularise code
// Functions are used to increase readibility
// Functions are used to use same code multiple times
// void -> which oes not return anything
// return
// parameterized 
// non parameterized
    
int sum(int num1, int num2) {
    int num3 = num1 + num2; // 5 + 6 = 11
    return num3;
}
int maxx(int num4, int num5) {
    if(num4 >= num5) return num4;
    else return num5;
}

int main() {

    int num1, num2;
    cin >> num1 >> num2;
    int add = sum(num1, num2);
    cout << add;

    int num4, num5;
    cin >> num4 >> num5;
    int big = maxx(num4,num5);
    cout << big;
        
    return 0;
}
