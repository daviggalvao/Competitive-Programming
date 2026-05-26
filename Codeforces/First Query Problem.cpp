#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int n, q, k, x, num;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    cin >> q;
    while(q--){
        cin >> num;
        if(num==1){
            cin >> k >> x;
            k--;
            v[k] = x;
        }
        if(num==2){
            cin >> k;
            k--;
            cout << v[k] << endl;
        }
    }
}