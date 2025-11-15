#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<pair<int, bool>> num = {{4, false}, {8, false}, {15, false}, {16, false}, {23, false}, {42, false}};

pair<int, int> findPair(int product){
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            if(num[i].first * num[j].first == product) return {num[i].first, num[j].first};
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<int> a(6); int answer; pair<int, int> p0, p1;
    for(int k=0, i=1, j=2; k<4; k++){
        cout << "? " << i << " " << j << endl;
        cin >> answer;
        if(k==0){
            p0 = findPair(answer);
        }
        else if(k==1){
            p1 = findPair(answer);
            if(p0.first == p1.first){
                a[1] = p0.first;
                a[0] = p0.second;
                a[2] = p1.second;
            } 
            else if(p0.first == p1.second){
                a[1] = p0.first;
                a[0] = p0.second;
                a[2] = p1.first;
            } 
            else if(p0.second == p1.first){
                a[1] = p0.second;
                a[0] = p0.first;
                a[2] = p1.second;
            } 
            else{
                a[1] = p0.second;
                a[0] = p0.first;
                a[2] = p1.first;
            }
        }
        else{
            a[k+1] = answer/a[k];
        }
        i++; j++;
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<6; j++){
            if(a[i]==num[j].first) num[j].second = true;
        }
    }
    for(int i=0; i<6; i++){
        if(!num[i].second) a[5] = num[i].first;
    }
    cout << "! " << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << a[5] << '\n';
}