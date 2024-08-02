#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    std::vector<int> adj[n];
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int>color[2];
    vector<int>visited(n, 0);
    vector<int>node_color(n, -1);
    bool bipartile = false;

    // inline dfs
    function<void(int, int)> dfs = [&](int node, int c)->void{
        for (auto cur : adj[node]) {
            if (visited[cur]) {
                if (node_color[cur] == c) {
                    bipartile = true;
                    return;
                }
            } else {
                visited[cur] = 1;
                color[!c].push_back(cur);
                node_color[cur] = !c;
                dfs(cur, !c);
            }
        }
    };

    node_color[0] = 0;
    color[0].push_back(0);
    visited[0] = true;
    dfs(0, 0);

    if (bipartile) {
        cout << "Alice" << endl;
        while (n--) {
            cout << "1 2" << endl;
            int u, v; cin >> u >> v;
        }
    } else {
        cout << "Bob" << endl;
        int i = 0, j = 0;
        while (n--) {
            int u, v;
            cin >> u >> v;
            if (u > v)swap(u, v);
            if (u == 1) {
                if (i < color[0].size()) {
                    cout << color[0][i] + 1 << " " << u << endl;
                    i++;
                }
                else {
                    cout << color[1][j] + 1 << " " << v << endl;
                    j++;
                }
            }
            else {
                if (j < color[1].size()) {
                    cout << color[1][j] + 1 << " " << u << endl;
                    j++;
                }
                else {
                    cout << color[0][i] + 1 << " " << v << endl;
                    i++;
                }
            }
        }
    }
}

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}