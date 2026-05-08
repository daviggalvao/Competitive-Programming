#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    unordered_map<ll, ll> hm;
    ll n, tmp, p, min=1e9, max=1;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> tmp;
        if(tmp<min) min = tmp;
        if(tmp>max) max = tmp;
        if(hm.find(tmp) == hm.end()) hm.insert({tmp, 1});
        else hm[tmp]++;
    }
    if(max==min) p = (n*n-n)/2;
    else p = hm[min]*hm[max];
    cout << max-min << ' ' << p << endl;
}