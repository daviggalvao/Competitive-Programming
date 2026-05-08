#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    string a;
    int count = 0;
    cin >> a;
    for(int i=0, n=a.size(); i<n; i++){
        if(a[i]=='4' or a[i]=='7') count++;
    }
    (count==4 or count==7)? cout << "YES\n" : cout << "NO\n";
}