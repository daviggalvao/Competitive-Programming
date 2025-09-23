#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, max=0, c1=0, c2=0, change=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++){
        if(i && a[i]!=a[i-1]) change++;
        if(change==2){
            int tmp = min(c1,c2);
            if(tmp>max) max = tmp;
            a[i]==1? c1=0 : c2=0;
            change=1;
        }
        a[i]==1? c1++ : c2++;
    }
    int tmp = min(c1,c2);
    if(tmp>max) max = tmp;
    !max? cout << 2*min(c1,c2) : cout << 2*max;
}