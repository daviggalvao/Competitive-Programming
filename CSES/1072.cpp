#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long n;
    cin >> n;
    for(long long i=1; i<=n; i++) cout << (i*i*(i*i-1)/2) - 4*(i-1)*(i-2) << '\n';
}