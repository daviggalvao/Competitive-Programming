#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n); 
        ll sum=0;
        for(int i=0; i<n; i++) cin >> v[i];
        for(int i=1; i<n; i+=2){
            if(i<n-1){
                if(v[i]<(v[i-1]+v[i+1])){
                    int diff = v[i-1]+v[i+1]-v[i];
                    sum += diff;
                    ll sub = min({v[i+1], diff});
                    v[i+1] -= sub;
                    v[i-1] -= (diff - sub);
                }
            }
            else{
                if(v[i]<v[i-1]){
                    ll diff = v[i-1]-v[i];
                    v[i-1] -= diff;
                    sum += diff;
                }
            }
        }
        cout << sum << '\n';
    }
}