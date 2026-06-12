#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int t, n, x, y, z;
    cin >> t;
    while(t--){
        cin >> n >> x >> y >> z;
        int with=0, without=0, tmp=n;
        while(tmp>0){
            tmp -= x;
            tmp -= y;
            without++;
        }
        while(n>0){
            n -= x;
            if(z<=0) n -= (10*y);
            z--;
            with++;
        }
        cout << min(with, without) << endl;
    }
}