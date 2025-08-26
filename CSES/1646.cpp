#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,q;
    cin >> n >> q;
    long psum[n];
    for(int i=0; i<n; i++){
        long a;
        cin >> a;
        if(i==0) psum[i] = a;
        else psum[i] = psum[i-1] + a;
    }
    while(q--){
        int a,b;
        cin >> a >> b;
        a--; b--;
        if(a>0) cout << psum[b]-psum[a-1] << endl;
        else cout << psum[b] << endl;
    }
}