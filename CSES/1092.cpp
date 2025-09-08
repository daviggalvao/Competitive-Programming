#include <bits/stdc++.h>
using namespace std;
 
int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long n, tmp;
    cin >> n;
    tmp = n;
    long long sum = n*(n+1)/2;
    if(sum%2==0){
        cout << "YES\n";
        sum/=2;
        set<long long> sum1, sum2;
        while(1){
            sum -= tmp;
            if(sum>0){
                sum1.insert(tmp);
            }
            if(sum<=0){
                sum+=tmp;
                sum1.insert(sum);
                break;
            }
            tmp--;
        }
        for(long long i=1; i<n; i++){
            auto it = sum1.find(i);
            if(it == sum1.end()){
                sum2.insert(i);
            }
        }
        cout << sum1.size() << '\n';
        for(auto i=sum1.begin(); i!=sum1.end(); i++){
            cout << *i << ' ';
        }
        cout << '\n' << sum2.size() << '\n';
        for(auto i=sum2.begin(); i!=sum2.end(); i++){
            cout << *i << ' ';
        }
    }
    else cout << "NO";
}