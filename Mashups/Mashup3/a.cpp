#include <bits/stdc++.h>
#define ll long long
using namespace std;

int f(int x){
    int value = 0;
    while(x>1){
        x = ceil(x/2.0);
        value++;
    }
    return value;
}

int main(void){
    int t;
    cin >> t;
    while(t--){
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        cout << 1 + min({f(a) + f(m), f(n-a+1) + f(m), f(n) + f(b), f(n) + f(m-b+1)}) << '\n';
    }
}