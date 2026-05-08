#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int t;
    cin >> t;
    while(t--){
        int n, tmp, sum=0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> tmp;
            sum += tmp;
        }
        if(sum<0){
            cout << "1\n";
            continue;
        }
        if((sum/(n*1.0))==1){
            cout << "0\n";
            continue;
        }
        int diff = sum-n;
        diff<0? cout << "1\n" : cout << diff << endl;
    }
}