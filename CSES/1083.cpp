#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long int n, sum=0;
    cin >> n;
    for(long long int i=0; i<n-1; i++){
        int a;
        cin >> a;
        sum += a;
    }
    long long int sumT = (1+n) * n/2;
    cout << sumT - sum << endl;
}