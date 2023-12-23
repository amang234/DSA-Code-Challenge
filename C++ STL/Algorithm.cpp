#include<bits/stdc++.h>

using namespace std;


bool comp(pair<int,int>p1, pair<int,int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // they are same 

    if(p1.first > p2.first) return true;
    return false;
}


void explainExtra() {

    sort(a,a+n); // {1, 2, 3, 4}
    sort(v.begin(), v.end()); // it will sort the elements from start to end

    sort(a+2, a+4); // {1, 2, 3, 4} only 3, 4 will be sorted

    sort(a, a+n, greater<int>); // sorts in descending

    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};

    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending 

    sort(a, a+n, comp);
    // {{4,1}, {2,1}, {1,2}}

    int num = 7;
    int cnt = __builtin_popcount(); // counts the 1 in its binary number
    // it will print 3

    long long num = 165785684859 
    int cnt = __builtin_popcountll();

    string s = "123";
    sort(s.begin(), s.end()); // sort the given string first

    do{
        cout << s<< endl;
    } while(next_permutation(s.begin(), s.end())); // permutation

    int maxi = *max_elemnet(a,a+n);
}
