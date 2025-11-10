#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int l=0, sum=0, r=(s.size()-1);
        while(l<r){
            if((s[r]-s[l])!=0) sum++;
            l++; r--;
        }
        cout << sum << '\n';
    }
}