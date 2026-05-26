#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int start, end, ans=0;
    cin >> start >> end;
    while(end>start){
        end%2==0? end /= 2 : end++;
        ans++;
    }
    ans += start-end;
    cout << ans;
}