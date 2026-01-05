#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, tmp, sum=0;
    cin >> t;
    for(int i=0; i<t; i++){
        int cont = 0;
        for(int j=0; j<3; j++){
            cin >> tmp;
            if(tmp) cont++;
        }
        if(cont>1) sum++;
    }
    cout << sum;
}