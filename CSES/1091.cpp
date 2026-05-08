#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int n, m, tmp;
    cin >> n >> m;
    multiset<int> prices;
    for(int i=0; i<n; i++){
        cin >> tmp;
        prices.insert(tmp);
    }
    while(m--){
        cin >> tmp;
        auto it = prices.upper_bound(tmp);
        if(it==prices.begin()) cout << -1 << endl;
        else{
            it--;
            cout << *it << endl;
            prices.erase(it);
        }
    }
}