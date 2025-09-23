#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a[5]={0}, tmp;
    for(int i=0; i<4; i++){
        cin >> tmp;
        a[tmp-1]++;
    }
    for(int i=0; i<5; i++){
        if(a[i]==0) cout << i+1;
    }
}