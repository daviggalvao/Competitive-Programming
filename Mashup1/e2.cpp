#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, tmp, count1=0, count2=0;
        cin >> n;
        vector<int> v;
        for(int i=0; i<n; i++){
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(),v.end());
        for(int i=0; i<n; i++){
            if((v[i]+v[n-1])%2==0) break;
            count1++;
        }
        for(int i=n-1; i>=0; i--){
            if((v[i]+v[0])%2==0) break;
            count2++;
        }
        count1>count2? cout << count2 << '\n' : cout << count1 << '\n';
    }
}