#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int n, m, tmp;
    ll sum = 0;
    cin >> n >> m;
    set<int> s;
    for(int i=0; i<n; i++){
        cin >> tmp;
        s.insert(tmp);
        sum += tmp;
    }
    for(int i : s){
        if(sum-i == m){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
}