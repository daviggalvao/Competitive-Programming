#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, time1=1e6, time2=1e6, timeSame=1e6;
        cin >> n;
        while(n--){
            int timeBook;
            string hab;
            cin >> timeBook >> hab;
            if(hab[0]=='1' && hab[1]=='1' && timeBook<timeSame) timeSame = timeBook;
            if(hab[0]=='1' && timeBook<time1) time1 = timeBook;
            if(hab[1]=='1' && timeBook<time2) time2 = timeBook;
        }
        if(time1 == 1e6 || time2 == 1e6) cout << "-1\n";
        else (timeSame<(time1+time2) && timeSame!=1e6)? cout << timeSame << '\n' : cout << time1+time2 << '\n';
    }
}