#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<ll> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());
        bool check = true;
        for(int i=0; i<n-2; i++){
            if(v[i+2]!=(v[i]%v[i+1])){
                check = false;
                break;
            }
        }
        check? cout << v[0] << ' ' << v[1] << endl : cout << "-1\n";
    }
}