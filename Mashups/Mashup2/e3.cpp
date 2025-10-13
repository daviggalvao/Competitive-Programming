#include <bits/stdc++.h>
using namespace std;

int bfs(vector<vector<int>> &adj, int start, int end, int n){
    queue<int> q;
    vector<int> dist(n, -1);
    dist[0] = 0;
    q.push(start);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : adj[u]){
            if(dist[v]==-1){
                dist[v] = dist[u] + 1;
                if(v == end) return dist[v];
                q.push(v);
            }
        }
    }
    return -1;
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, tmp[2];
    cin >> n >> m;
    vector<vector<int>> train(n);
    vector<vector<int>> bus(n);
    vector<vector<bool>> trainCheck(n, vector<bool>(n));
    for(int i=0; i<m; i++){
        cin >> tmp[0] >> tmp[1];
        tmp[0]--; tmp[1]--;
        train[tmp[0]].push_back(tmp[1]);
        train[tmp[1]].push_back(tmp[0]);
        trainCheck[tmp[0]][tmp[1]] = trainCheck[tmp[1]][tmp[0]] = true;
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(!trainCheck[i][j]){
                bus[i].push_back(j);
                bus[j].push_back(i);
            }
        }
    }
    int timeBus = bfs(bus, 0, n-1, n);
    int timeTrain = bfs(train, 0, n-1, n);
    (timeBus==-1 || timeTrain==-1)? cout << -1 : cout << max(timeBus, timeTrain);
}