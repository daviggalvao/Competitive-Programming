#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, q[2], k[2], coord[2];
    cin >> n;
    cin >> q[0] >> q[1];
    cin >> k[0] >> k[1];
    cin >> coord[0] >> coord[1];
    (k[0]<q[0] && k[1]<q[1] && coord[0]<q[0] && coord[1]<q[1] ||
    k[0]>q[0] && k[1]>q[1] && coord[0]>q[0] && coord[1]>q[1] ||
    k[0]<q[0] && k[1]>q[1] && coord[0]<q[0] && coord[1]>q[1] ||
    k[0]>q[0] && k[1]<q[1] && coord[0]>q[0] && coord[1]<q[1])? cout << "YES\n" : cout << "NO\n";
}