#include <bits/stdc++.h>
using namespace std;
 
int main(void) {
    long t, x, y;
    cin >> t;
    while(t--){ 
        cin >> x >> y;
        if(x==y) cout << x*x-x+1 << '\n';
        if(x>y) (x%2==0)? cout << x*x-y+1 << '\n' : cout << x*x-2*x+y+1 << '\n';
        if(x<y) (y%2==0)? cout << y*y-2*y+x+1 << '\n' : cout << y*y-x+1 << '\n';
    }
}