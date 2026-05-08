#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        bool flag = false;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i]) flag=true;
        }
        if(!flag){
            cout << "No\n";
            continue;
        }
        for(int i=0; i<n-1; i++){
            if(v[i]){
                for(int j=i+1; j<i+1+k; j++){
                    if(v[j]) goto erro;
                }
            }
        }
        cout << "Yes\n";
        continue;
        erro: cout << "No\n";
    }
}