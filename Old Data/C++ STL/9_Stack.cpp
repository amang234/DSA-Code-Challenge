#include<bits/stdc++.h>
using namespace std;

void explainStack() {
    // LIFO -> Last In First Out
    Stack<int> st;
    st.push(1); //{1}                    |5|
    st.push(2); //{2, 1}                 |3|
    st.push(3); //{3, 2, 1}              |3| stack (closed from bottom)
    st.push(3); //{3, 3, 2, 1}           |2|
    st.emplace(5); //{5, 3, 3, 2, 1}     |1|

    cout << st.top(); // prints 5 "** st[2] is invalid **"

    st.pop(); // {3, 3, 2, 1}

    cout << st.top(); // 3
    
    cout << st.size(); // 4
    
    cout << st.empty();

    stack<int>st1, st2;
    st1.swap(st2);

}

int main() {

    return 0;
}