#include <bits/stdc++.h>
using namespace std;
    
int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x,y,k;
        cin >> x >> y >> k;
        int c1=ceil(x*1.0/k), c2=ceil(y*1.0/k);
        c1>c2? cout << 2*c1-1 << '\n' : cout << 2*c2 << '\n';
    }
}