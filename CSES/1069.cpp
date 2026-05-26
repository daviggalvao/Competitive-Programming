#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int max = 1, count = 1;
    string s;
    cin >> s;
    for(int i=1, n=s.length(); i<=n; i++){
        s[i]==s[i-1]? count++ : count = 1;
        if(count>max) max = count;
    }
    cout << max << endl;
}