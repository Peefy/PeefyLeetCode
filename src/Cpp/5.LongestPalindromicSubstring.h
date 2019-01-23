
#ifndef __LENGTH_OF_LONGEST_SUBSTRING_H
#define __LENGTH_OF_LONGEST_SUBSTRING_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int len, start = 0, max = 0;
    string longestPalindrome(string s) {
        if ((len = s.length()) <= 1) return s;
        for (int i = 0; i < len; i++) {
            i = helper(s, i);
        }
        return s.substr(start, max);
    }
    int helper(string s, int k) {
        int i = k - 1, j = k;
        while (j < len - 1 && s[j] == s[j + 1]) j++;
        int nextCenter = j++;
        while (i >= 0 && j < len && s[i] == s[j]) {
            i--;
            j++;
        }
        if (j - i - 1 > max) {
            max = j - i - 1;
            start = i + 1;
        }
        return nextCenter;
    }
};

#endif
