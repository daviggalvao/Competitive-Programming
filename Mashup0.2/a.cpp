#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        bool adj=true, noDouble=true;
        int checkAlfa[26] = {0};
        if(s.length()==1){
            cout << "Yes\n";
            continue;
        }
        sort(s.begin(), s.end());
        for(int i=0, n=s.length(); i<n; i++){
            if(i>0){
                if(abs(s[i]-s[i-1])!=1){
                    adj=false;
                    break;
                }
            }
            checkAlfa[s[i]-'a']++;
            if(checkAlfa[s[i]-'a']>1){
                noDouble = false;
                break;
            }
        }
        (noDouble && adj)? cout << "Yes\n" : cout << "No\n";
    }
}