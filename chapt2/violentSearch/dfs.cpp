//
// Created by Guodong Shen on 7/21/16.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> v(20);
int n, k;

bool dfs(int i, int sum) {
    if (i == n) {
        return sum == k;
    }

    if (dfs(i + 1, sum)) return true;

    return dfs(i + 1, sum + v[i]);

}

int main() {

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> k;

    cout << dfs(0, k) << endl;

    return 0;
}