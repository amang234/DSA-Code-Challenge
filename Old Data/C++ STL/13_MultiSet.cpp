#include<bits/stdc++.h>
using namespace std;

void explainMultiSet() {
    // Everything is same as set
    // Sorted but not unique

    MultiSet<int> s;
    ms.insert(1); // {1}                    
    ms.insert(1); // {1, 1}                    
    ms.insert(1); // {1, 1, 1}
    
    ms.erase(1); // all 1's erased

    int cnt = ms.count(1); // counts the total no. of 1s

    // only a single 1 erased
    ms.erase(ms.find(1));
    ms.erase(ms.find(1), ms.find(1)+2);

    // Rest all functions same as set
    return 0;
}