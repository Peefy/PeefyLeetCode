 

#ifndef __STRING_COUNT_SEGMENTS_H
#define __STRING_COUNT_SEGMENTS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
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
    int countSegments(string s) {
        int res = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] != ' ' && (i == 0 || (s[i - 1] == ' '))){
                ++res;
            }
        }
        return res;
    }
};

#endif

