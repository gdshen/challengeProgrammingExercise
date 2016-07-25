//
// Created by Guodong Shen on 7/25/16.
//

// Difference between DFS & BFS

#include <iostream>
#include <queue>

using namespace std;

const int INF = 100000000;
const int MAX_M = 100;
const int MAX_N = 100;

typedef pair<int, int> P;

char maze[MAX_M][MAX_N];
int N, M;
int sx, sy;
int gx, gy;
int d[MAX_N][MAX_M];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int bfs() {
    queue<P> que;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            d[i][j] = INF;
        }
    }

    que.push(P(sx, sy));
    d[sx][sy] = 0;

    while (!que.empty()) {
        P p = que.front();
        que.pop();
        if (p.first == gx && p.second == gy) {
            break;
        }

        for (int i = 0; i < 4; i++) {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];

//          if codes doesn't work correctly, first check the condition of if && while statement.
            if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' && d[nx][ny] == INF) {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }

    return d[gx][gy];
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> maze[i][j];
        }
    }
    cin >> sx >> sy >> gx >> gy;

    int res = bfs();
    cout << res << endl;
    return 0;
}
