#include<bits/stdc++.h>
using namespace std;

void explainVector() {

    vector<int> v; // creates an empty container

    v.push_back(1); // Adds a value 1 to the container. Ex: {1}
    v.emplace_back(2); // Increases a space in the same container and adds 2
    // Ex: {1, 2}

    vector<pair<int, int>>vec;

    v.push_back({1, 2}); // Uses curly bracket to store the array 
    v.emplace_back(1, 2); // Just need a single circle bracket to store

    vector<int> v(5, 100); // creates a container with size 5; all elements as 100
    // like this {100, 100, 100, 100, 100}

    Vector<int> v(5); // creates a container of size 5; all elemnets as 0 
    // Like this {0, 0, 0, 0, 0}

    vector<int> v1(5, 20);
    vector<int> v2(v1); // Creates another container which is a copy of v1
}

int main() {

    return 0;
}