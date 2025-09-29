#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s, answer;
    cin >> s;
    int check[26]={0}, len=s.length();
    priority_queue<string> pares;
    for(int i=0; i<len; i+=2){
        string temp;
        temp.insert(0, 1, s[i]);
        temp.insert(1, 1, s[i+1]);
        check[s[i]-'a'] = 1;
        check[s[i+1]-'a'] = 1;
        pares.push(temp);
    }
    while(!pares.empty()){
        string temp = pares.top();
        pares.pop();
        if(check[temp[0]-'a'] && check[temp[1]-'a'] && temp[0]!=temp[1]){
            answer = temp + answer;
            check[temp[0]-'a'] = 0;
            check[temp[1]-'a'] = 0;
        }
    }
    for(int i=0; i<26; i++){
        if(check[i]==1){
            cout << "-1";
            return 0;
        }
    }
    cout << answer;
}