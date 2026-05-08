#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n, k;
    cin >> t;
    while(t--){
        int sum = 0;
        cin >> n >> k;
        vector<int> buy(n), sell(n);
        for(int i=0; i<n; i++){
            i<k? buy[i] = 5 : buy[i] = 10;
            cin >> sell[i];
        }
        sort(sell.begin(), sell.end(), greater<int>());
        for(int i=0; i<n; i++){
            if(sell[i]>buy[i]) sum += (sell[i]-buy[i]);
        }
        cout << sum << '\n';
    }
}