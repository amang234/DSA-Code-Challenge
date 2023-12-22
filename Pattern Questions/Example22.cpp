/*
Patterns -> Nested Loops
Ex:  
4 4 4 4 4 4 4 
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4       
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4 
 
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
    for(int i=0;i<2*n-1;i++) {
        for(int j=0;j<2*n-1;j++) {
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<< (n-min(min(top,down), min(left, right)));
        }
        cout<< endl;
    }   
}
int main() {
    int n;
    cin>>n;
    print1(n);
}