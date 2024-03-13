#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v2{1,2,3,4,6,7,8,5,7};
    vector<int> v1{7, 6, 5};
    if((v1.size() - v2.size())>5) {
        cout << "large";
    }
    else {
        cout << "small";
    }
    return 0;
}