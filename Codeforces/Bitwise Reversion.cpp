#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, x[3];
    cin >> t;
    while(t--){
        for(int i=0; i<3; i++) cin >> x[i];
        ((x[0] & x[1])==(x[1] & x[2]) && (x[1] & x[2])==(x[0] & x[2]))? cout << "YES\n" : cout << "NO\n";
    }
}