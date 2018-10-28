
#ifndef __STRING_FIND_ANAGRAMS_H
#define __STRING_FIND_ANAGRAMS_H

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
    vector<int> findAnagrams(string s, string p) {
            vector<int> soln;
            if (s.length() == 0 || p.length() == 0 || s.length() < p.length())
            {
                return soln;
            }
            int chars[26] = {0};
            for(auto c : p)
            {
                chars[c - 'a']++;
            }
            int left = 0, right = 0, length = s.length(), count = p.length();
            while (right < length)
            {
                char rightTemp = s[right];
                if (chars[rightTemp - 'a'] >= 1)
                {
                    count--;
                }
                chars[rightTemp - 'a']--;
                right++;
                if (count == 0)
                {
                    soln.push_back(left);
                }
                if (right - left == p.length())
                {
                    char tempLeft = s[left];
                    if (chars[tempLeft - 'a'] >= 0)
                    {
                        count++;
                    }
                    chars[tempLeft - 'a']++;
                    left++;
                }
            }
            return soln;
    }
};

#endif
