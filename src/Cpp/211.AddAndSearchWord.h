
#ifndef __ADD_AND_SEARCH_WORD_H
#define __ADD_AND_SEARCH_WORD_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin->tie(NULL);
    return 0;
}();


struct Node{
    bool isWord = false;
    Node * next[26] = {};
};

class WordDictionary {
public:
    Node * root;
    WordDictionary() {
        root = new Node(); 
    }
    /** Adds a word into the data structure. */
    void addWord(string word) {
        Node* p = root;
        for(int i = 0;root&&i<word.size();++i){
            if(p->next[word[i]-'a'] == NULL){
                p->next[word[i]-'a'] = new Node();
            }
            p = p->next[word[i]- 'a'];
        }
        p->isWord  = true;
    }
    

    bool dfs(Node* root,string word,int i){
        if(!root) return false;
        if(i>= word.size()) return root->isWord;
        if(word[i]!='.'){
            if(root->next[word[i]-'a'])
                return dfs(root->next[word[i]-'a'],word,i+1);
            else 
                return false;
        }
        for(int j = 0;j<26;++j){
            if(root->next[j]&&dfs(root->next[j],word,i+1)){
                return true;
            }
        }
        return false;
    }
    
    bool search(string word) {
        return dfs(root,word,0);
    }
};



#endif
