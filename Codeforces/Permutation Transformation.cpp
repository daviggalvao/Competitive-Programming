#include <bits/stdc++.h>
#define ll long long
using namespace std;

void permutation(vector<int> &v, vector<int> &d, int l, int r, int depth){
    if(l>r) return;
    int im = l;
    for(int i=l+1; i<r+1; i++){
        if(v[i]>v[im]) im = i;
    }
    d[im] = depth;
    permutation(v, d, l, im-1, depth+1);
    permutation(v, d, im+1, r, depth+1);
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n), d(n);
        for(int i=0; i<n; i++) cin >> v[i];
        permutation(v, d, 0, n-1, 0);
        for(int i=0; i<n; i++) cout << d[i] << ' ';
        cout << '\n';
    }
}