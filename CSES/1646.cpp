#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    ll n, q, a, b;
    cin >> n >> q;
    ll psum[n];
    for(int i=0; i<n; i++){
        cin >> a;
        !a? psum[i] = a : psum[i] = psum[i-1] + a;
    }
    while(q--){
        cin >> a >> b;
        a--; b--;
        a>0? cout << psum[b]-psum[a-1] << endl : cout << psum[b] << endl;
    }
}