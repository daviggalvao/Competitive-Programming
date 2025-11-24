#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        n%2!=0? cout << "0\n" : cout << n/4 + 1 << '\n';
    }
}