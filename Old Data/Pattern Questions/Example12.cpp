/*
Patterns -> Nested Loops
Ex:
 1      1       0
 12    21       1
 123  321       2
 12344321       3
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
    int space=2*(n-1);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout<< j<<" ";
        }
        for(int j=1;j<=space;j++) {
            cout<<"  ";
        }
        for(int j=i;j>=1;j--) {
            cout<< j<<" ";
        } 
        cout<< endl;
        space -=2;
    }
}
int main() {
    int n;
    cin>>n;
    print1(n);
}
