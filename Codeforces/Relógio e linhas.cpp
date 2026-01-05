#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        vector<int> r(2),b(2);
        cin >> r[0] >> r[1] >> b[0] >> b[1];
        sort(r.begin(), r.end());
        sort(b.begin(), b.end());
        ((r[0]<b[0] && r[1]>b[1]) || (r[1]<b[0] && r[1]<b[1]) || (r[0]>b[0] && r[1]<b[1]) || (r[0]>b[0] && r[0]>b[1]))? cout << "No\n" : cout << "Yes\n";
    }
}