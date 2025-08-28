#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int n;
    cin >> n;
    char map[n][n];
    bool check = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> map[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(map[i][j]!=map[j][i]){
                check = false;
                break;
            }
        }
        if(!check) break;
    }
    check? cout << "Sim\n" : cout << "Nao\n";
}