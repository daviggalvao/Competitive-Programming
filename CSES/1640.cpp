#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,sum,tmp;
    cin >> n >> sum;
    map<int,int> mp;
    for(int i=0; i<n; i++){
        cin >> tmp;
        if(mp.count(tmp)){
            cout << (mp[tmp] + 1) << ' ' << (i + 1);
            return 0;
        }
        else mp[sum-tmp]=i;
    }
    cout << "IMPOSSIBLE";
}