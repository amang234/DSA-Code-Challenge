/*
Hashing
|1|2|1|3|2|
1 -> 2
3 -> 1
4 -> 0
2 -> 2
10 -> 20

Brute Force approach
int f(number, a[]) {
    count = 0;
    for(i=0;i<n;i++) {
        if(a[i] == number) {
            count = count + 1;
        }
    }
    return count;
}

TC ->O(q*n)
say if q -> 10^5 and n ->10^5 then it would be 10^10
which will take like 100sec to execute
so we use hashing instead

It creates another array called as hash array or frequenciy hash
where it stores the value at index
Say we take the array we talked about before
|1|2|1|3|2| Now hash will create another array with this
 0 1 2 3 4 5 6     Index of the array
|0|2|2|1|0|0|0|    Values in array 

What it does is like we have been given two 1's
So it will take index 1 and store a value 2 at it

*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    inr arr[n];
    for(int i = 0;i<<n;i++) {
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for(int i = 0;i<<n;i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;
        //fetch
    }
    return 0;
}