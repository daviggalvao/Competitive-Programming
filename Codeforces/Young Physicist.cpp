#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, a[3];
    cin >> n;
    int coord[3] = {0};
    while(n--){
        cin >> a[0] >> a[1] >> a[2];
        for(int i=0; i<3; i++){
            coord[i] += a[i];
        }
    }
    (!coord[0] && !coord[1] && !coord[2])? cout << "YES" : cout << "NO";
}