#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    long long sum=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum += v[i];
    }
    if(n==1){
        cout << v[0];
        return 0;
    }
    long long min = 1e18;
    for(int i=1, s=(1<<n)-1; i<s; i++){
        long long sumTmp=0;
        for(int j=0; j<n; j++){
            if((i >> j) & 1){
                sumTmp += v[j];
            }
        }
        long long value = abs(sumTmp - (sum - sumTmp));
        if(value<min) min = value;
    }
    cout << min;
}