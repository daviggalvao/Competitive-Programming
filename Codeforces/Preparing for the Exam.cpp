#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, m, l, sumKnow=0;
        cin >> n >> m >> l;
        vector<int> test(m), know(l);
        for(int i=0; i<m; i++){
            cin >> test[i];
        }
        for(int i=0; i<l; i++){
            cin >> know[i];
            sumKnow+=know[i];
        }
        if(n==l) for(int i=0; i<m; i++) cout << 1;
        else if(l<n-1) for(int i=0; i<m; i++) cout << 0;
        else{
            int sumTmp=0;
            for(int i=1; i<=n; i++) sumTmp+=i;
            for(int i=0; i<m; i++){
                int sum = sumTmp-test[i];
                (sum==sumKnow)? cout << 1 : cout << 0;
            }
        }
        cout << '\n';
    }
}