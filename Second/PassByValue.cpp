#include <iostream>

using namespace std;
// Pass by value
//Example 1

void doSomething(int num) {
    cout << num << endl;
    num += 25;
    cout << num << endl;
    num += 25;
    cout << num << endl;
}

//Example 2

void dosome(string s) {
    s[1] = 'F';
    cout << s;
}

int main() {
    int num = 25;
    doSomething(num);
    cout << num << endl;

    string s = " Bill";
    dosome(s);
    cout << s << endl;
    return 0;
}
