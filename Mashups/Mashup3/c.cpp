#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool palindrome(int m, string sub){
    int n = sub.length();
    vector<int> cont(26, 0);
    for(int i = 0; i < m; i++) cont[sub[i] - 'a']++;
    for(int i = 0; i < n/2; i++){
        int pair = n - i - 1;
        if(i < m){
            if(pair >= m){
                if(!cont[sub[pair] - 'a']) return false;
                cont[sub[pair] - 'a']--;
            }
        }
        else if(sub[i] != sub[pair]) return false;
    }
    for(int c = 0; c < 26; c++) if(cont[c]%2 != 0) return false;
    return true;
}

int main(void){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length(), i = 0;
        while(i < n/2 && s[i] == s[n - i - 1]) i++;
        if(i == n/2){
            cout << "0\n";
            continue;
        }
        n -= 2*i;
        string sub = s.substr(i, n);
        int ans = n;
        for(int j = 0; j < 2; j++){
            int l = 1, r = n;
            while(l <= r){
                int m = (l + r)/2;
                palindrome(m, sub)? r = m - 1 : l = m + 1;
            }
            ans = min(ans, r+1);
            reverse(sub.begin(), sub.end());
        }
        cout << ans << '\n';
    }
}