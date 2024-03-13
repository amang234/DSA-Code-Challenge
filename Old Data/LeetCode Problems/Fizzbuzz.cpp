#include<bits/stdc++.h>
using namespace std;
// Fizz Buzz

int main() {
    // vector<int>ans;
    // ans.push_back(5);
    // ans.push_back(4);
    // ans.push_back(6);
    // ans.push_back(8);
    // ans.push_back(2);
    // for(int i=0;i<ans.size();i++) {
    //     cout<<ans[i]<<" ";
    // }
    
    int n;
    cout<<"enter the value";
    cin>>n;
    for(int i=1;i<=n;i++) {
        if(i%3==0 && i%5==0) {
            cout<<"FizzBuzz"<<endl;    
        }
        else if(i%3==0) {
            cout<<"Fizz"<<endl;
        }
        else if(i%5==0) {
            cout<<"Buzz"<<endl;
        }
        else {
            cout<<i<<endl;
        }    
    }

    return 0;
}