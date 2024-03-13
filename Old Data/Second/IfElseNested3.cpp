#include<bits/stdc++.h>
using namespace std;
/*
Take the age fron the user and then decide accordingly 
1. If age < 18,
   print-> not eligible for job
2. If age > 18 and <= 54,
   print-> eligible for job
3. If age >= 55 and <= 57,
   print-> eligible for job, but retirement soon
4. If age > 57,
   print-> Retirement time     
*/
int main() {
    int age;
    cin >> age;
    if(age<18) {
        cout << "Not eligible for job";
    }
    else if(age<=57) {
        cout << "Eligible for job";
        if(age>54) {
            cout << ", but retirement soon";
        }
    }
    else if(age>57) {
        cout << "Retirement Time";
    }
    return 0;
} 