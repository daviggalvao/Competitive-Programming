#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    long long n, mod=1e9 + 7, ans=1;
    cin >> n;
    while(n--){
        ans = ans*2 % mod;
    }
    cout << ans;
}