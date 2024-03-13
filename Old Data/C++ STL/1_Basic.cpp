#include<iostream>
#include<math.h>
#include<string.h> 
//Instead of all these, we can write it in a single one. 
#include<bits/stdc++.h>

using namespace std;

// void is used to directly call a value
void print() {
    cout<< "raj";
}

// int function returns a value 
// so you have to call it inside int main function
int sum(int a, int b) {
    return a + b;
}

int main(){
    int a;
    // instead of writing this
    // std::cin >> a;
    // std::cout << a;
    // We mention above -> using namespace std;

    print();
    int s = sum(1,5);
    // prints 6
    cout << s;
    return 0;
}