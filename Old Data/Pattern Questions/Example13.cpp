/*
Patterns -> Nested Loops
Ex: 1    
    2 3   
    4 5 6   
    7 8 9 10   
    11 12 13 14 15   
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
    int num=1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout<< num <<" ";
            num = num+1;
        }
        cout<< endl;
    }
}
int main() {
    int n;
    cin>>n;
    print1(n);
}