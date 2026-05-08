#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int n, m, tmp;
    cin >> n >> m;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    while(m--){
        cin >> tmp;
        cout << upper_bound(v.begin(), v.end(), tmp) - v.begin() << ' ';
    }
}