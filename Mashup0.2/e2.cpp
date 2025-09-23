#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long a[n], min=1e10, sum=0, neg=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum+=abs(a[i]);
            if(a[i]<0) neg++;
            if(abs(a[i])<min) min=abs(a[i]);
        }
        neg%2!=0? cout << sum-2*min << '\n' : cout << sum << '\n';
    }
}