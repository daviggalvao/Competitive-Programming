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
        char s[n];
        int r = 0, l = 0;
        for(int i=0; i<n; i++){
            cin >> s[i];
            (s[i]=='(')? r++ : l++;
        }
        (r==l)? cout << "YES\n" : cout << "NO\n";
    }
}