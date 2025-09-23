#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, checkZero=0, countOne=0;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        for(int i=0; i<n; i++){
            if(i>0){
                if(v[i]==v[i-1] && v[i]==0){
                    checkZero++;
                    break;
                }
            }
            if(v[i]==1) countOne++;
        }
        (checkZero || (countOne>n-1))? cout << "Yes\n" : cout << "No\n";
    }
}