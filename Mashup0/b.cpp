#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long int n,m;
    cin >> n >> m;
    long long int sum = ((ceil(n/2.0) * ceil(m/2.0)) + (floor(n/2.0) * floor(m/2.0)));
    cout << sum << endl;
}