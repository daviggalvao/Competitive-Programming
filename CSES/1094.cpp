#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n, prev, curr, count=0;
    cin >> n;
    cin >> prev;
    for(int i=1; i<n; i++){
        cin >> curr;
        (curr < prev)? count += (prev - curr) : prev = curr;
    }
    cout << count;
}