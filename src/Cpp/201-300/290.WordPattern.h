 
#ifndef __WORD_PATTERN_H
#define __WORD_PATTERN_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <stdint.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
    vector<string> splitstring(string str, char symbol){
        vector<string> strs;
        int count = str.length();
        int index = 0;
        int end = 0;
        for(size_t i = 0; i < count; i++)
        {
            if (str[i] == symbol){
                strs.push_back(str.substr(index, i));
                index = i + 1;
            }
        }      
        return strs;
    }

    bool wordPattern(string pattern, string str) {
        vector<string> strs = splitstring(str, ' ');
        int strscount = strs.size();
        int pcount = pattern.length();
        if (strscount != pcount)
            return false;
        map<char, string> hash;
        for (int i = 0; i < pcount; i++) {
            char c = pattern[i];
            string s = strs[i];
            if (hash.find(c) == hash.end()){
                for (auto it = hash.begin(); it != hash.end(); ++it){
                    if ((*it).second == s)
                        return false;
                }
                hash[c] = s;
            }
            else{
                if (hash[c] != s)
                    return false;
            }
        }
        return true;
    }
};

#endif
