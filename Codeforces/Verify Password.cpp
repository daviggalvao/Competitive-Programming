#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int t;
    cin >> t;
    while(t--){
        int n, check=1;
        char s[n];
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> s[i];
            if(!isalnum(s[i])){
                check = 0;
            }
            else if(i>0){
                if(isdigit(s[i])){
                    if(isalpha(s[i-1])){
                        check = 0;
                    }
                    if(isdigit(s[i-1])){
                        if((s[i]-s[i-1])<0){
                            check = 0;
                        }
                    }
                }
                if(isalpha(s[i])){
                    if(isalpha(s[i-1])){
                        if((s[i]-s[i-1])<0){
                            check = 0;
                        }
                    }
                }
            }
        }
        check? cout << "YES\n" : cout << "NO\n";
    }
}