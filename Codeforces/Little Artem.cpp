#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!i && !j) cout << 'W';
                else cout << 'B';
            }
            cout << '\n';
        }
    }
}