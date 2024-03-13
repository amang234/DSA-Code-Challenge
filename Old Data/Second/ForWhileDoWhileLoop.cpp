#include <iostream>

using namespace std;

int main() {
    // For Loop
    int i;
    for (i = 1; i <= 20; i = i + 1) {
        cout << "I Love You " << endl;
        cout << "I Love You " << i << endl;
    }
    cout << i << endl;

    // While Loop
    int i=1;
    while(i<=5) {
        cout << "Aman " << i << endl;
        i=i+1;
    }

    // Do While Loop
    int i=2;
    do {
        cout << "Aman" << i << endl;
        i=i+1;

    } while(i<=1);
    cout << i << endl;
    return 0;
}
