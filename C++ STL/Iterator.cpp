#include<bits/stdc++.h>
using namespace std;

void main() {
    // iterator points to the memory where the integer value is saved
    vector<int>::iterator it =v.begin(); 
    // Say there's a container with values {20, 10, 15, 12, 5}
    // So the iterator is pointing to the element 20 in the Memory

    it++;// it moves furthur in the memory h
    // Here now it has moved to element 10
    cout << *(it) << " ";// This prints the iterator value
    // The last iterator value was 10 so it will print 10

    vector<int>::iterator it = v.end(); // This points to the memory location just after the last value in the container
    --it;
    cout << *(it) << " ";// This prints the last value in the container

    // Others that are not used but are there
    vector<int>::iterator it = v.rend(); // This means reverse end
    //  Ex: {10, 20, 30, 40, 50}
    // means if you reverse the array so then the end value
    // So its pointing to the value before 10

    vector<int>::iterator it = v.rbegin(); //reverse begin 
    //  Ex: {10, 20, 30, 40, 50}
    // means if you reverse the array so then the begin value
    // So its pointing to the value after 50

    cout<< v[0]<< " " << v.at(0); // Both means to print the value at that index
    
    cout << v.back() << " "; // Prints the last element in the array


    // Printing the vector
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    } 
    // Instead of always mentioning the type
    // we can use auto
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for(auto it : v) {
        cout << it << " ";// Prints the array v
    }


}

int main() {

    return 0;
}