//
// Created by Guodong Shen on 7/25/16.
//

#include <algorithm>
#include <iostream>

using namespace std;

const int MAX_N = 1000;
int perm[MAX_N];
bool used[MAX_N];

void permutation1(int pos, int n) {
    if (pos == n) {
        // do something
        return ;
    }


    for (int i = 0; i < n; i++) {
        if(!used[i]) {
            perm[pos] = i;
            used[i] = true;
            permutation1(pos + 1, n);
            used[i] = false;
        }
    }
}

int perm2[MAX_N];
void permutation2(int n) {
    for (int i = 0; i < n; i++) {
        perm2[i] = i;
    }
    do {
        // do something
        for(int i = 0; i < n; i++) {
            cout << perm2[i] << " ";
        }
        cout << endl;
    } while (next_permutation(perm2, perm2 + n));
    return ;
}

int main() {
    int n;
    cin >> n;
    permutation2(n);
    return 0;
}

