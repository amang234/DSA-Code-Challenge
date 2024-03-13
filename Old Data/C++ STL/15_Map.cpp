#include<bits/stdc++.h>
using namespace std;


void explainMap() {
    // Say there's a same value in a set 
    // so to define a unique key for every value
    // {key, value}
    // key is unique, value could be same
    // key and value can be any type
    // int char float double
    // stores unique keys in sorted order
    // same as set
    Map<int, int> mpp;
    
    Map<int, pair<int, int> mpp;
    
    Map< pair<int, int>, int> mpp;

    mpp[1] = 2; // stores {1, 2}
    mpp.emplace({3, 1}); // stores {3, 1}    
    mpp.insert({2, 4}); // Store {2, 4}
    mpp[{2,3}] = 10; // stores {{2, 4}, 10}

    for(auto it : mpp) { 
        // stores all the values 
        cout << it.first << " " << it.second << endl; 
        // {1, 2} {2, 4}
    }

    cout << mpp[1]; // prints 2
    cout << mpp[5]; // prints 0 or null
    
    // {3, 1}
    auto it = mpp.find(3);
    cout << *(it).second; // prints the value for the key 3 i.e., 1
    
    auto it = mpp.find(5); // mpp.end()
    
    // this is the syntax
    auto it = map.lower_bound(2);
    auto it = map.upper_bound(3);

    //erase,swap, size, empty ,are the same as above
}

vois explainMultimap() {
    // everything same as map , only it can store multiple keys
    // only mpp[key] cannot be used here
}

void explainUnorderedMap() {
    //same as set and unordered set difference
    // has unizue keys like map but not multiple keys
}

int main() {

    return 0;
}