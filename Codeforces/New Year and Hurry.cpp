#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,k,time=240;
    bool check=false;
    cin >> n >> k;
    time-=k;
    int l=1, r=n, mid, pa;
    if(time<5) cout << 0;
    else{
        while(l<=r){
            mid = (l+r)/2;
            pa = (5*(mid+1)*mid/2);
            if(pa<=time && (pa+(mid+1)*5>time || l==r)){
                cout << mid;
                check=true;
                break;
            }
            else if(pa<time) l = mid+1;
            else r = mid-1;
        }
        if(!check) cout << mid;
    }
}