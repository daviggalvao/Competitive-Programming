#include <bits/stdc++.h>
using namespace std;
 
int main(void){
    int a, c=0;
    cin >> a;
    while(a>=5){
        a/=5;
        c+=a;
    }
    cout << c << endl;
}