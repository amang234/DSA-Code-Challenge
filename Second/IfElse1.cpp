#include<bits/stdc++.h>

using namespace std;
// Write an age that takes an input of age
//and prints if you are adult or not
// >=18 Yes
// < 18 No
int main() {
    int age;
    cin >> age;
    if(age >=18) {
        cout<<"Yes you are an adult.";
    }
    else if(age <10){
        cout << "No you are not an adult";
    }
    else {
        cout << "Teenager";
    }

    return 0;
}

