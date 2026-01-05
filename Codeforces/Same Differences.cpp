#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, tmp, n;
    cin >> t;
    while(t--){
        long long sum=0;
        cin >> n;
        unordered_map<int, int> hm;
        for(int i=0; i<n; i++){
            cin >> tmp;
            sum += hm[tmp-i];
            hm[tmp-i]++;
        }
        cout << sum << '\n';
    }
}