#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll mod = 1e9 + 7, n, x;
    cin >> n >> x;
    vector<ll> v(n), dp(x+1, 0);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    dp[0] = 1;
    for(int i=1; i<=x; i++){
        for(int j=0, l=upper_bound(v.begin(), v.end(), i)-v.begin(); j<l; j++){
            dp[i] = (dp[i] + dp[i-v[j]]) % mod;
        }
    }
    cout << dp[x] << '\n';
}