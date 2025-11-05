#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n, k;
    string s;
    cin >> t;
    while(t--){
        int cases = 0;
        cin >> n >> k;
        cin >> s;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                if(!i) cases++;
                else{
                    int tmp = k-1, index = i-1;
                    bool check = false;
                    while(tmp--){
                        if(s[index]=='1'){
                            check = true;
                            break;
                        }
                        index--;
                        if(index==-1) break;
                    }
                    if(!check) cases++;
                }
            }
        }
        cout << cases << '\n';
    }
}