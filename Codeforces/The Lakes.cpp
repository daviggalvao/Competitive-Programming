#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>> &lake, vector<vector<bool>> &visited, int i, int j, int n, int m){
    if(i<0 || i>n-1 || j<0 || j>m-1 || !lake[i][j] || visited[i][j]) return 0;
    int vol = lake[i][j];
    visited[i][j] = true;
    int dir[2][4] = {{0, -1, 0, 1}, {-1, 0, 1, 0}};
    for(int k=0; k<4; k++){
        int I = i + dir[0][k];
        int J = j + dir[1][k];
        vol += dfs(lake, visited, I, J, n, m);
    }
    return vol;
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n, m;
    cin >> t;
    while(t--){
        int vol = 0;
        cin >> n >> m;
        vector<vector<int>> lake(n, vector<int>(m));
        vector<vector<bool>> visited(n, vector<bool>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> lake[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(lake[i][j] && !visited[i][j]){
                    vol = max(vol, dfs(lake, visited, i, j, n, m));
                }
            }
        }
        cout << vol << '\n';
    }
}