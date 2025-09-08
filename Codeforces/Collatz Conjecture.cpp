#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, x, k;
    cin >> t;
    while(t--){
        cin >> k >> x;
        while(k--) x *= 2;
        cout << x << '\n';
    }
}