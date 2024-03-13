#include<bits/stdc++.h>
using namespace std;

void explainDeque() {
    Deque<int> dq;
    dq.push_back(2); // {2}    
    dq.emplace_back(4); // {2, 4}

    dq.push_front(5); // {5, 2, 4}
    dq.emplace_front(6); // {6, 5, 2, 4}

    dq.pop_back(); // {6, 5, 2}    
    dq.pop_front(); // {5, 2}

    dq.back();     

    dq.front(); 


    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

int main() {

    return 0;
}