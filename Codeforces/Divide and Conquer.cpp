#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void solve(){
    int x,y; cin >> x >> y;
    (x%y==0)? cout << "YES\n" : cout << "NO\n";
}

signed main(void){ fastio
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
}