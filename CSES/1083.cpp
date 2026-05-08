#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll n, a;
    cin >> n;
    ll sum = ((n+1)*n/2);
    for(ll i=0; i<n-1; i++){
        cin >> a;
        sum -= a;
    }
    cout << sum << endl;
}