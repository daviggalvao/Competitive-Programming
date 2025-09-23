#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,k,v;
    cin >> n >> k >> v;
    vector<int> x(n), psum(n);
    for(int i=0; i<n; i++) cin >> x[i];
    sort(x.begin(), x.end());
    for(int i=0; i<n; i++) !i? psum[i]=x[i] : psum[i] = x[i] + psum[i-1];
}