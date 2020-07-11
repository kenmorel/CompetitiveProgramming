/*
    520B - Two Buttons (Codeforces)

    author: Ken Morel
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> D((int)1e5+10, -1); 

int bfs(int src, int m) {
    queue<int> vertices;

    D[src] = 0;
    vertices.push(src);

    int dest = -1;

    while (!vertices.empty()) {
        int val = vertices.front();
        vertices.pop();

        if (val*2 <= 1e5) {
            if (D[val*2] == -1) {
                D[val*2] = D[val]+1;
                vertices.push(val*2);
            }
        }

        if (val-1 > 0) {
            if (D[val-1] == -1) {
                D[val-1] = D[val]+1;
                vertices.push(val-1);
            }
        }

        if (val == m) return D[val];
    }
}

int main() {
    int n, m;

    cin >> n >> m; 

    cout << bfs(n, m) << endl;

    return 0;
}