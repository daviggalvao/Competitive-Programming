
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int t;
    cin >> t;
    while(t--){
        ll x, y;
        bool yes = false;
        cin >> x >> y;
        for(ll i=2*x; i<y; i+=x){
            if(i%x==0 && y%i!=0){
                yes = true;
                break;
            }
        }
        yes? cout << "YES\n" : cout << "NO\n";
    }
}
