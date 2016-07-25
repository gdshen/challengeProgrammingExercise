//
// Created by Guodong Shen on 7/25/16.
//


#include <iostream>
#include <vector>

using namespace std;

const vector<int> V = {1, 5, 10, 50, 100, 500};

vector<int> C(6);
int A;

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> C[i];
    }
    cin >> A;

    int ans = 0;
    for (int i = 5; i >= 0; i--) {
        int t = min(A / V[i], C[i]);
        A -= t * V[i];
        ans += t;
    }
    cout << ans << endl;
}