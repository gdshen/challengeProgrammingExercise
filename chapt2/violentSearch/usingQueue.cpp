//
// Created by Guodong Shen on 7/21/16.
//
#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);

    cout << que.front() << endl;
    que.pop();

    cout << que.front() << endl;
    que.pop();

    cout << que.front() << endl;
    que.pop();
}

