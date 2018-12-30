
#ifndef __GOAT_LATIN_H
#define __GOAT_LATIN_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string.h>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    string toGoatLatin(string S) {
        set<char> yuanyin = {'a', 'e', 'i', 'o', 'u', 'I', 'E', 'A', 'O', 'U'};
        S.push_back(' ');
        int lastwordindex = 0;
        int nowwordfirstindex = 0;
        int length = S.length();
        for (int i = 0; i < length; ++i){
            if (S[i] == ' '){
                if (yuanyin.find(S[nowwordfirstindex]) == yuanyin.end()){
                    char first = S[nowwordfirstindex];
                    S.insert(S.begin() + i, first);
                    S.erase(S.begin() + nowwordfirstindex);
                } 
                S.insert(S.begin() + i, 'm');
                ++length;
                S.insert(S.begin() + i + 1, 'a');
                ++length;
                for (int j = 0;j <= lastwordindex; ++j){
                    S.insert(S.begin() + i + 1 + j, 'a');
                    ++length;
                }      
                lastwordindex++;
                i += (2 + lastwordindex);
                nowwordfirstindex = i + 1;
            }
        }
        S.pop_back();
        return S;
    }
};

#endif

