#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, m, k;
    cin >> n >> m >> k;
    char maze[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> maze[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(maze[i][j]=='.'){
                k--;
                maze[i][j]='X';
            }
            if(!k) break;
        }
        if(!k) break;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << maze[i][j];
        }
        cout << '\n';
    }
}