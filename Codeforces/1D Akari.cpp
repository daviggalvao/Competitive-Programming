#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    string s;
    cin >> s;
    int l = s.length();
    string t(s);
    for(int i=0; i<l; i++){
        if(s[i]=='#'){
            t[i]='#';
            if(i>0 and t[i-1]!='#') t[i-1]='o';
        }
        else t[i]='.';
    }
    if(t[l-1]=='.') t[l-1]='o';
    cout << t << endl;
}