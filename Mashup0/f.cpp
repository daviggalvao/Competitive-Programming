#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    for(int i=0, l=s.length(); i<l/2; i++){
        if(s[i]!=s[l-i-1]) return false;
    }
    return true;
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--){
        string s, ans;
        cin >> s;
        int l = 0, r = s.length()-1;
        while(s[l]==s[r] && l<=r){
            if(l==r){
                ans.insert(l, 1, s[l]);
                break;
            }
            ans.insert(l, 1, s[l]);
            ans.insert(l+1, 1, s[l]);
            l++; r--;
        }
        if(l!=r){
            string s1, s2, sub = s.substr(l, r-l+1);
            int l1 = 0, l2 = 0, r1 = sub.length() - 1, r2 = sub.length() - 1;
            //Back -> Front
            while(l1<=r1){
                if(isPalindrome(sub.substr(l1, r1-l1+1))){
                    s1 = sub.substr(l1, r1-l1+1);
                    break;
                }
                l1++;
            }
            //Front -> Back
            while(l2<=r2){
                if(isPalindrome(sub.substr(l2, r2-l2+1))){
                    s2 = sub.substr(l2, r2-l2+1);
                    break;
                }
                r2--;
            }
            s1.length() > s2.length() ? sub = s1 : sub = s2;
            ans.insert(l, sub);
        }
        cout << ans << '\n';
    }
}