//
// Created by Guodong Shen on 7/21/16.
//

#include <iostream>
#include <vector>

using namespace std;

int N, M;
const int MAX_N = 100;
const int MAX_M = 100;
vector<vector<char>> field(MAX_N, vector<char>(MAX_M));

void dfs(int x, int y) {
    if (field[x][y] == '.') return;

    field[x][y] = '.';

    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            int nx = x + dx, ny = y + dy;
            if (0 <= nx && nx < N && 0 <= ny < M && field[nx][ny] == 'W')
                dfs(nx, ny);
        }
    }
}

int solve() {
    int res = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if(field[i][j] == 'W') {
                dfs(i, j);
                res++;
            }
        }
    }

    return res;
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> field[i][j];
        }
    }
    cout << solve() << endl;
}
