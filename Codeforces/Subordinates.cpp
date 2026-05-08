#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int n, idx;
    cin >> n;
    vector<int> v(n, 0), chef(n, 0);
    for(int i=1; i<n; i++){
        cin >> chef[i];
        chef[i]--;
        idx = chef[i];
        while(1){
            v[idx]++;
            if(!idx) break;
            idx = chef[idx];
        }
    }
    for(int i : v) cout << i << ' ';
}