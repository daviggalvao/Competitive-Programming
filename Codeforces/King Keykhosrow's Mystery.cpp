#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << a*b/gcd(a, b) << endl;
    }
}