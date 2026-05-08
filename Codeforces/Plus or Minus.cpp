#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int t, a, b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        ((a+b)==c)? cout << "+\n" : cout << "-\n";
    }
}