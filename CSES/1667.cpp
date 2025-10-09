#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>> &computer, int start, int end, int n){
    queue<int> q;
    vector<int> parent(n, -1);
    vector<bool> visited(n, false);
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        if(u == end){
            vector<int> path;
            int cur = end;
            while(cur != -1){
                path.push_back(cur+1);
                cur = parent[cur];
            }
            reverse(path.begin(), path.end());
            return path;
        }
        for(int v : computer[u]){
            if(!visited[v]){
                visited[v] = true;
                parent[v] = u;
                q.push(v);
            }
        }
    }
    return {};
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, tmp[2];
    cin >> n >> m;
    vector<vector<int>> computer(n);
    for(int i=0; i<m; i++){
        cin >> tmp[0] >> tmp[1];
        tmp[0]--; tmp[1]--;
        computer[tmp[0]].push_back(tmp[1]);
        computer[tmp[1]].push_back(tmp[0]);
    }
    vector<int> ans = bfs(computer, 0, n-1, n);
    if(ans.size()){
        cout << ans.size() << '\n';
        for(int i : ans) cout << i << ' ';
    }
    else cout << "IMPOSSIBLE";
}