#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,k;
    cin >> n >> k;
    k--;
    int res = 0;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] >= a[k] && a[i] > 0){
            res++;
        }
        else break;
    }
    cout << res << endl;
}