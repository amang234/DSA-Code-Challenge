#include<bits/stdc++.h>
using namespace std;

void explainPQ() {
    // Max Heap
    Priority_queue<int> pq;
    pq.push(5);    //{5}                    |10|
    pq.push(2);    //{5, 2}                 | 8| 
    pq.push(8);    //{8, 5, 2}              | 5| Queue
    pq.emplace(10); //{10, 8, 5, 2}         | 2|

    cout << pq.top(); // prints 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top(); // prints 8

    // Size swap empty function same as other

    //Min Heap
    Priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);    //{5}                    | 2|
    pq.push(2);    //{2, 5}                 | 5| 
    pq.push(8);    //{2, 5, 8}              | 8| Queue
    pq.emplace(10); //{2, 5, 8, 10}         |10|

    cout << pq.top(); // prints 2
}

int main() {

    return 0;
}

// Time COmplexity of Push -> logn
// Time COmplexity of Top -> O(n)
// Time COmplexity of Pop -> logn