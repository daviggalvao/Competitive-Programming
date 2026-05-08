#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(void){ fastio
    int start, end, ans=0;
    cin >> start >> end;
    while(start!=end){
        if(start>end){
            ans = start - end;
            start = end;
        }
        else{
            if(2*start<=end){
                start *= 2;
                ans++;
            }
            else{
                start--;
                ans++;
            } 
        }
    }
    cout << ans;
}