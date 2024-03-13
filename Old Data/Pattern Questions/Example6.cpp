/*
Patterns -> Nested Loops
Ex: 1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2 
    1   
1. For the outer loop, count the number of lines.
So here the no. of rows are 4 and columns are 4 too.
2. For the inner loop, focus on the columns 
and connect them somehow to the rows
3. print the 'x' inside the inner for loop
4. Observe symmetry (Exceptional)
*/
#include<bits/stdc++.h>
using namespace std;
void print1(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i+1;j++) {
            cout<<j<<" ";
        }
        cout<< endl;
    }
}
int main() {
    int n;
    cin>>n;
    print1(n);
}
