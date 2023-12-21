/*
Patterns -> Nested Loops
Ex:
*            0 [1,4]  {i+1,n-i-1}
* *          1 [2,3]  {i+1,n-i-1}
* * *        2 [3,2]  {i+1,n-i-1}
* * * *      3 [4,1]  {i+1,n-i-1}
* * * * *    4 [5,0]  {i+1,n-i-1}
* * * *      1 [4,1]  {n-i,i}    
* * *        2 [3,2]  {n-i,i}    
* *          3 [2,3]  {n-i,i}    
*            4 [1,4]  {n-i,i}    
       
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
        for(int j=0;j<i+1;j++) {
            cout<<"* ";
        }
        cout<< endl;
    }
    for(int i=1;i<n;i++) {
        for(int j=0;j<n-i;j++) {
            cout<<"* ";
        }
        cout<< endl;
    }
    */
    for(int i = 1;i<=2*n-1;i++) {
        int star = i;
        if(i>n) star=2*n-i;
        for(int j=1;j<=star;j++) {
            cout<<"*";
        }
        cout<< endl;
    }

}
int main() {
    int n;
    cin>>n;
    print1(n);
}
