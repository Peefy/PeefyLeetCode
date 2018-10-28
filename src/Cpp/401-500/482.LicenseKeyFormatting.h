
#ifndef __LICENSEKEY_FORMATTING_H
#define __LICENSEKEY_FORMATTING_H

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
    string licenseKeyFormatting(string S, int K) {
        auto n = S.length();
        auto count = 0;
        vector<char> chars;
        for(int i = 0; i < n; i++)
        {
            auto j = n - i - 1;
            if (S[j] == '-')
                continue;
            if (S[j] >= 'a' && S[j] <= 'z')
                chars.push_back(S[j] - 'a' + 'A');
            else
                chars.push_back(S[j]);
            count++;
            if (count % K == 0)
                chars.push_back('-');
        }
        auto size = chars.size();
        if (size > 0 && chars.back() == '-')
            chars.pop_back();
        return string(chars.rbegin(), chars.rend());
    }
};

#endif
