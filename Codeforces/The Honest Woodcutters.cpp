#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int n;
    cin >> n;
    bool ok = true;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        a[i]--;
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
        b[i]--;
        if(a[b[i]]!=i){
            ok = false;
            break;
        }
    }
    ok? cout << "Yes" : cout << "No";
}