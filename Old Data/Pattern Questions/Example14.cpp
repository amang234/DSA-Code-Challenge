/*
Patterns -> Nested Loops
Ex: A
    AB
    ABC
    ABCD
    ABCDE       
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
    for(int i=0;i<n;i++) {
        for(char ch='A'; ch<='A'+ i;ch++) {
            cout<< ch <<" ";
        }
        cout<< endl;
    }
}
int main() {
    int n;
    cin>>n;
    print1(n);
}