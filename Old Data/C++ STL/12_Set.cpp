#include<bits/stdc++.h>
using namespace std;

void explainSet() {
    // Sorted & Unique
    Set<int> s;
    s.insert(1); // {1}                    
    s.emplace(2); // {1, 2}                |4|
    s.insert(2); // {1, 2}                 |3| Set
    s.insert(4); // {1, 2, 4}              |2|
    s.insert(3); // {1, 2, 3, 4}           |1|

    // Functionality of insert in vector
    // can be sed also, that only increases
    //efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = s.find(3); // returns an iterator that points to 3

    // {1, 2, 3, 4, 5}
    auto it = s.find(6); // Returns an iterator at s.end()

    // {1, 4, 5}
    s.erase(5); // erases 5 // takeslogarithmic time

    int cnt = s.count(1); // if true then 1 else 0

    auto it = s.find(3);
    s.erase(it); // it takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = s.find(2);
    auto it2 = s.find(4);
    s.erase(it1,it2); // after erase {1, 4, 5} [first, last)

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does.

    // this is the syntax 
    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3);
    return 0;
}