#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    cin >> t;
    while(t--){
        int max = 0, count = 0;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]==1) count=0;
            else count++;
            if(count > max) max = count;
        }
        cout << max << '\n';
    }
}