#include<bits/stdc++.h>
using namespace std;


// Pairs
void explainPair() {
    pair<int, int>p1= {1, 3};
    cout << p1.first << " " << p1.second;

    pair<int, pair<int, int>>p2= {5, {6, 7}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second;
    
    // Utility Library
    pair<int, int>arr[] = { {1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second;
        
}

int main() {
    explainPair();
}