#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, l;
        cin >> n >> l;
        int X=l, Y=l;
        for(int i=0; i<n; i++){
            int x,y;
            cin >> x >> y;
            if(i!=0){
                X += x;
                Y += y;
            }
        }
        int p = 2*X + 2*Y;
        cout << p << '\n';
    }
}