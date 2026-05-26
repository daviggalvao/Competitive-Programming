#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int n, t, count=0;
    cin >> n >> t;
    vector<int> b(n);
    int sum=0, max=0;
    for(int i=0; i<n; i++) cin >> b[i];
    for(int i=0; i<n; i++){
        int j=i;
        for(int j; j<n; j++){
            if(sum+b[j]<=t) sum+=b[j];
            else break;
        }
        if(j-i>max) max = j-i;
        sum-=b[i];
    }
    cout << count;
}