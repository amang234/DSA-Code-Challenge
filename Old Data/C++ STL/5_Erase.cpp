#include<bits/stdc++.h>
using namespace std;

// Erase
void Main() {
    // {10, 20, 12, 23}
    v.erase(v.begin()+ 1); // Erases the value at index
    // {10, 12, 23}

    // {10, 20, 12, 23, 35}
    v.erase(v.begin() +2, v.begin() + 4); // [start, end)
    // {10, 20, 35}
}



int main() {

    return 0;
}