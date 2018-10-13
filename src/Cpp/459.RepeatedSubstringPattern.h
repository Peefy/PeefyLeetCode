
#ifndef __REPEATED_SUBSTRING_PATTERN_H
#define __REPEATED_SUBSTRING_PATTERN_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        auto length = s.length() - 1;
        char * sss = (char*)malloc(length * 2);
        memcpy(sss, s.c_str() + 1, length);
        memcpy(sss + length, s.c_str(), length);
        string sss_str = string(sss);
        return (int)sss_str.find(s) != -1;
    }
};

#endif


