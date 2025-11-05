#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    long long sum=0, maxSum=v[0];
    for(int i=0; i<n; i++){
        if(sum<0) sum = 0;
        sum += v[i];
        if(sum>maxSum) maxSum = sum;
    }
    cout << maxSum;
}   