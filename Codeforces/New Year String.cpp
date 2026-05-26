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
        string s;
        cin >> s;
        (s.find("2026")!=string::npos or s.find("2025")==string::npos)? cout << "0\n" : cout << "1\n";
    }
}