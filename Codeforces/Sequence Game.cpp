#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t,n,tmp;
    cin >> t;
    while(t--){
        cin >> n;
        long long min = 1e10, max=-1e10;
        for(int i=0; i<n; i++){
            cin >> tmp;
            if(tmp>max) max = tmp;
            if(tmp<min) min = tmp;
        }
        cin >> tmp;
        (min<=tmp && tmp<=max)? cout << "YES\n" : cout << "NO\n";
    }
}