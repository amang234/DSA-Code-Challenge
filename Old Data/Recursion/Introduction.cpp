/*
Recursion -> When a function calls itself 
          -> until a specified condition is met.

void f() {            void f() {           void f() {         void f() { 
    print(1);             print(1);            print(1);          print(1);
    f();                  f();                 f();               f();
}
main() {
    f();
}
Being called again and again
Called as a infinite recursion
*/
#include<bits/stdc++.h>
using namespace std;

void print() {
    cout << 1 << endl;
    print();
}
int main() {
    // #ifndef ONLINE_JUDGE
    // freeopen("input.txt", "r", stdin);
    // freeopen("output.txt", "w", stdout);
    // #endif

    print();

    return 0;
}
// when the infinite recursion takes place
// The stack has some particular memory
// so it stops giving the output when the memory is full
// stops at some point
// this is called segmentation
// stack overflow

// the space where it is stored 
// stack space

/*
cut=0
f() { 
    print(cut);
    cut++;
    f();
}
main() {
    f();
}
This will print 0 then 1 then 2 and keeps on going
so to stop this we use a Base Condition

cut=0
f() {
    if(cut==2);                |      |
    return;              stack |      |
    print(cut);                |(f),l5|
    cut++;
    f();
}
main() {
    f();
}
 
cut=0 1
f() {
    if(cut==2);                |      |
    return;              stack |(f),l5|
    print(cut);                |(f),l5|
    cut++;
    f();
}

cut=0 1 2
f() {
    if(cut==2);                |(f),l5|
    return;              stack |(f),l5|
                               |(f),l5|


}
*/

#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void print() {
    if(cnt == 3) return;
    cout << cnt << endl;
    cnt++;
    print();
}
int main() {
    // #ifndef ONLINE_JUDGE
    // freeopen("input.txt", "r", stdin);
    // freeopen("output.txt", "w", stdout);
    // #endif

    print();

    return 0;
}

// recursion tree
// The way that recursion takes place 
// Like it goes on an on till it stops
// and then the function returns back