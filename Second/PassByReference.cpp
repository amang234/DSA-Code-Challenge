#include <iostream>

using namespace std;
// Pass by Reference
//Example 1

void doSomething(int &num) {
    cout << num << endl;
    num += 25;
    cout << num << endl;
    num += 25;
    cout << num << endl;
    num += 25;
}

//Example 2

void dosome(string &s) {
    s[1] = 'F';
    cout << s;
}

// Example 3

void dosometh(int arr[], int n) {
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}


int main() {
    int num = 25;
    doSomething(num);
    cout << num << endl;

    string s = " Bill";
    dosome(s);
    cout << s << endl;

    int n =5;
    int arr[n];
    for(int i=0;i<n; i=i+1) {
        cin >> arr[i];
    }
    dosometh(arr,n);
    cout << "Value inside int main: " << arr[0] << endl;
    
    return 0;
}
