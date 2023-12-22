/*
Patterns -> Nested Loops
Ex:   
* * * * * * * * * *          0 [5,0,5]  {n-i,2i,n-i}
* * * *     * * * *          1 [4,2,4]  {n-i,2i,n-i}    
* * *         * * *          2 [3,4,3]  {n-i,2i,n-i}    
* *             * *          3 [2,6,2]  {n-i,2i,n-i}  
*                 *          4 [1,8,1]  {n-i,2i,n-i}    
*                 *          0 [1,8,1]  {n-i,2i,n-i}    
* *             * *          1 [2,6,2]  {n-i,2i,n-i}    
* * *         * * *          2 [3,4,3]  {n-i,2i,n-i}    
* * * *     * * * *          3 [4,2,4]  {n-i,2i,n-i}
* * * * * * * * * *          4 [5,0,5]  {n-i,2i,n-i}
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

    /*
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i;j++) {
            cout<<"*";
        }
        for(int j=0;j<2*i;j++) {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++) {
            cout<<"*";
        }
        cout<< endl;
    }
    for(int i=n-1;i>=0;i--) {
        for(int j=0;j<n-i;j++) {
            cout<<"*";
        }
        for(int j=0;j<2*i;j++) {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++) {
            cout<<"*";
        }
        cout<< endl;
    }
    */
    int inis=0;   
    for(int i=0;i<n;i++) {
        for(int j=1;j<=n-i;j++) {
            cout<<"*";
        }
        for(int j=0;j<inis;j++) {
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++) {
            cout<<"*";
        }
        inis +=2;
        cout<< endl;
    }

    inis = 2*n-2;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        for(int j=0;j<inis;j++) {
            cout<<" ";
        }
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        inis -=2;
        cout<< endl;
    }
}
int main() {
    int n;
    cin>>n;
    print1(n);
}
