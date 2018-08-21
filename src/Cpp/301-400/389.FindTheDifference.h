
#ifndef __FIND_THE_DIFFERENCE_H
#define __FIND_THE_DIFFERENCE_H

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

int guess(int num);

class Solution {
public:
    char findTheDifference(string s, string t) {
        int res = 0;
        for(auto c : s)
            res -= c;
        for(auto c : t)
            res += c;
        return (char)res;
    }
};

#endif
