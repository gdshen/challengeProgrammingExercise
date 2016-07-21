//
// Created by Guodong Shen on 7/21/16.
//
#include <stack>
#include <iostream>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    s.pop();
    s.pop();
    if(s.empty()) {
        cout << "Now s is empty!\n";
    }
    return 0;
}
