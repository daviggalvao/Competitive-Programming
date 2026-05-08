#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; 
    cin >> t;
    while(t--){
        int l[4];
        cin >> l[0] >> l[1] >> l[2] >> l[3];
        (l[0] == l[1] && l[1] == l[2] && l[2] == l[3])? cout << "YES\n" : cout << "NO\n";
    }
}