#include<bits/stdc++.h>
using namespace std;
// Parameterised
void para1(int i, int sum) {
    if(i<1) {
        cout<<sum;
        return;
    }
    para1(i-1,sum+i);
}
int main() {
    int n;
    cin>>n;
    para1(n,0);


    return 0;
}