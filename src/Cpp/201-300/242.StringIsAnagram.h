 
#ifndef __STRING_IS_ANAGRAM_H
#define __STRING_IS_ANAGRAM_H

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
    bool isAnagram(string s, string t) {
        int s_counter[26] = {0};
        int t_counter[26] = {0};
        int s_len = s.length();
        int t_len = t.length();      
        if (s_len != t_len) {
            return false;
        }
        for(int i = 0; i < s_len; i++)
        {
            s_counter[s[i] - 'a'] += 1;
            t_counter[t[i] - 'a'] += 1;
        }
        for(int i = 0; i < 26; i++)
        {
            if (s_counter[i] != t_counter[i])
                return false;
        }
        return true;
    }
};

#endif
