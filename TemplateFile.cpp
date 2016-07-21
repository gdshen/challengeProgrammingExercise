//
// Created by Guodong Shen on 7/21/16.
//

#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
//  operation on vector
    vector<int> v(10);
    vector<int> v2(10, 1);
    vector<int> v3(v2);
    unsigned int row = 10;
    unsigned int column = 20;
    vector<vector<int>> v4(row, vector<int>(column));

    cout << v4.size() << endl;
    cout << v2[3] << endl;

    v2[3] = 6;
    v2[8] = 9;
    sort(begin(v2), end(v2));
    for (int i = 0; i < v2.size(); ++i) {
        cout << v2[i] << " ";
    }

//  operation on stack
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    cout << s.top() << endl;
    if(!s.empty()) {
        cout << "check whether stack s is empty!\n";
    }
    cout << endl;

//  operation on queue
    queue<int> que;
    que.push(1);
    que.push(2);
    cout << que.front() << endl;
    que.pop();

    return 0;
}

