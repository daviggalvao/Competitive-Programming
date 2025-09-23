#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x,n;
        cin >> x >> n;
        n%2==0? cout << "0\n" : cout << x << '\n';
    }
}