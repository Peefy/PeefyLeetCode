
#ifndef __VERIFYING_AN_ALIEN_DICTIONARY_H
#define __VERIFYING_AN_ALIEN_DICTIONARY_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>
#include <string.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int reOrder[26] = {0};

    bool compareto(string a, string b){
        for(int i = 0; i < a.length(); ++i)
        {
            if(i >= b.length())
                return false;
            if(reOrder[a[i]-'a'] > reOrder[b[i] - 'a'])
                return false;
            else if (reOrder[a[i]-'a'] < reOrder[b[i]-'a'])
                return true;
            else 
                continue;
        }
        return true;
    }
   
    bool isAlienSorted(vector<string>& words, string order) {
        for (int i = 0;i < 26;++i){
            reOrder[order[i] - 'a'] = i; 
        } 
        for (int i = 0; i < words.size() - 1; ++i){
            if (compareto(words[i], words[i + 1]) == false)
                return false;
        }           
        return true;
    }
};

#endif

