/*
Patterns -> Nested Loops
Ex:
            A            0 [4,1,4]  {n-i-1,2i+1,n-i-1}
          A B A          1 [3,3,3]  {n-i-1,2i+1,n-i-1}
        A B C B A        2 [2,5,2]  {n-i-1,2i+1,n-i-1}
      A B C D C B A      3 [1,7,1]  {n-i-1,2i+1,n-i-1}
    A B C D E D C B A    4 [0,9,0]  {n-i-1,2i+1,n-i-1}
       
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
        for(int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        char ch='A';
        int breakpoint = (2*i+1) / 2;
        for(int j=1;j<=2*i+1;j++) {
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        for(int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        cout<< endl;

    }
}
int main() {
    int n;
    cin>>n;
    print1(n);
}
