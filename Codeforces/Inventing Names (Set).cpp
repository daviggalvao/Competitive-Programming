#include <bits/stdc++.h>
using namespace std;

unordered_set<string> name;

string findSmallest(string &str, int k){
    if(str.size() && name.find(str)==name.end()) return str;
    if(str.size()==k) return "";
    for(char c='a'; c<='z'; c++){
        str.push_back(c);
        string find = findSmallest(str, k);
        if(find.size()) return find;
        str.pop_back();
    }
    return "";
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    string start = "", tmp;
    for(int i=0; i<n; i++){
        cin >> tmp;
        name.insert(tmp);
    }
    string answer = findSmallest(start, k);
    cout << answer << '\n';
}