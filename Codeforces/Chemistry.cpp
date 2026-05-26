#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        map<char, int> m;
        char c;
        for(int i=0; i<n; i++){
            cin >> c;
            m[c]++;
        }
        if(n-k==1){
            cout << "YES\n";
            continue;
        }
        int numImp=0;
        for(auto i=m.begin(); i!=m.end(); i++){
            if(i->second%2!=0) numImp++;
        }
        (k>=numImp-1)? cout << "YES\n" : cout << "NO\n";
    }
}