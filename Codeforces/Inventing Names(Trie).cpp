#include <bits/stdc++.h>
using namespace std;

struct TrieNode{
    TrieNode* children[26];
    bool endOfWord;

    TrieNode(){
        endOfWord = false;
        for(int i=0; i<26; i++){
            children[i] = nullptr;
        }
    }
};

class Trie{
public:
    TrieNode* root;

    Trie(){
        root = new TrieNode;
    }

    void insert(string &word){
        TrieNode* current = root;
        for(char ch : word){
            int index = ch - 'a';
            if(current->children[index] == nullptr) current->children[index] = new TrieNode;
            current = current->children[index];
        }
        current->endOfWord = true;
    }
};

Trie trie;

string findSmallest(TrieNode* node, string &str, int k){
    if(!str.empty() && (node == nullptr || !node->endOfWord)) return str;
    if(str.size() == k) return "";
    for(char c = 'a'; c <= 'z'; c++){
        TrieNode* nextNode = nullptr;
        if(node != nullptr) nextNode = node->children[c - 'a'];
        str.push_back(c);
        string result = findSmallest(nextNode, str, k);
        str.pop_back();
        if(!result.empty()) return result;
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
        trie.insert(tmp);
    }
    string answer = findSmallest(trie.root, start, k);
    cout << answer << '\n';
}