/*
Patterns -> Nested Loops
Ex:   
    * * * * * * * * *    0 [0,9,0]  {i,2n(2i+1),i}
      * * * * * * *      1 [1,7,1]  {i,2n(2i+1),i}    
        * * * * *        2 [2,5,2]  {i,2n(2i+1),i}    
          * * *          3 [3,3,3]  {i,2n(2i+1),i}    
            *            4 [4,1,4]  {i,2n(2i+1),i}    
       
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
        for(int j=0;j<i;j++) {
            cout<<"   ";
        }
        for(int j=0;j< 2*n-(2*i+1);j++) {
            cout<<" * ";
        }
        for(int j=0;j<i;j++) {
            cout<<"   ";
        }
        cout<< endl;
    }
}
int main() {
    int n;
    cin>>n;
    print1(n);
}
