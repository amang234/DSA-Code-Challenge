#include<bits/stdc++.h>
using namespace std;

void explainQueue() {
    // FIFO -> First In First Out
    queue<int> q;
    q.push(1);    //{1}                    |5|
    q.push(2);    //{1, 2}                 |2| Queue
    q.emplace(5); //{1, 2, 4}              |1|

    q.back() +=5;
    cout << q.back(); // prints 10

    // Q is {1, 2, 10}
    cout << q.front(); // prints 1

    q.pop(); // {2, 10}

    cout << q.front(); // prints 2

    // sizw swap empty same as stackhn
    
}

int main() {

    return 0;
}