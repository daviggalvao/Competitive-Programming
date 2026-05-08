#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int t, x, y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        (x%2!=0 and y%2!=0)? cout << "NO\n" : cout << "YES\n";
    }
}