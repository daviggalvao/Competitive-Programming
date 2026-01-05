#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, d, pix;
    cin >> n;
    vector<int> prices(n);
    for(int i=0; i<n; i++) cin >> prices[i];
    sort(prices.begin(), prices.end());
    cin >> d;
    while(d--){
        cin >> pix;
        cout << upper_bound(prices.begin(), prices.end(), pix) - prices.begin() << '\n';
    }

}