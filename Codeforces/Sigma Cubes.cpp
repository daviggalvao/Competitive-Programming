#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; ll sum=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        ll a = (pow(-1, i) * pow(i, 3));
        sum += a;
    }
    cout << sum;
}