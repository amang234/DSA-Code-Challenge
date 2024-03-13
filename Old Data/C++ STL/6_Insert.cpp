#include<bits/stdc++.h>
using namespace std;

void main() {
    vector<int> v;
    vector<int> v1;
    vector<int> v2;
    // Insert Function
    vector<int>v(2,100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> v2(2, 50); // {50, 50}
    v.insert(v.begin(), v2.begin(), v2.end()); // {50, 50, 300, 10, 10, 100, 100}

    // {10, 20}
    cout << v.size(); // 2

    // {10, 20}
    v.pop_back(); // {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30, 40} , v2-> {10, 20}

    v.clear(); // erases the entire vector

    cout << v.empty(); //checks if the vector is empty or not
    // if vector has even an elemnet it says false
    // else says true

}
