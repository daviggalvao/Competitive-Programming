#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    string a, b;
    cin >> a >> b;
    for(int i=0, n=a.size(); i<n; i++){
        (a[i]!=b[i])? cout << '1' : cout << '0';
    }
    cout << endl;
}