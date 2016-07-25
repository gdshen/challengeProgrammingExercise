//
// Created by Guodong Shen on 7/25/16.
//


#include <iostream>
#include <vector>

using namespace std;

const int MAX_M = 100000;
int n;
vector<int> startTime(MAX_M);
vector<int> endTime(MAX_M);

pair<int, int> itv[MAX_M];

int solve() {
    int ans = 0, t = -1;
    for (int i = 0; i < n; i++) {
        if(t < itv[i].second) {
            ans++;
            t = itv[i].first;
        }
    }
    return ans;
}

int main() {
    int input;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        startTime[i] = input;
    }
    for (int i = 0; i < n; i++) {
        cin >> input;
        endTime[i] = input;
    }
    for (int i = 0; i < n; i++) {
        itv[i].first = endTime[i];
        itv[i].second = startTime[i];
    }
    sort(itv, itv+n);


    int v = solve();
    cout << v << endl;
}