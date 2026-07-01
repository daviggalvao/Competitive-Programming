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
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        cout << v[n-1]-v[0]+1 << endl;
    }
}