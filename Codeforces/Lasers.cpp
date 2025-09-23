#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m,x,y;
        cin >> n >> m >> x >> y;
        for(int i=0; i<n; i++) cin >> x;
        for(int i=0; i<m; i++) cin >> y;
        cout << n+m << '\n';
    }
}