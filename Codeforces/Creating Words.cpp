#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        char tmp = s1[0];
        s1[0] = s2[0];
        s2[0] = tmp;
        cout << s1 << ' ' << s2 << endl;
    }
}