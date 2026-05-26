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
        float m = (a+b)/2.0;
        int mini = min(a, b);
        int count = 0;
        while(mini<m){
            mini += c;
            count++;
        }
        cout << count << endl;
    }
}