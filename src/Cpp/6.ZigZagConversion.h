
#ifndef __ZIG_ZAG_CONVERSION_H
#define __ZIG_ZAG_CONVERSION_H

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
    string convert(string s, int numRows) {
        if (numRows == 1) 
            return s;
        string ret = "";
        int n = s.length();
        int cycleLen = 2 * numRows - 2;
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j + i < n; j += cycleLen) {
                ret.push_back(s[j + i]);
                if (i != 0 && i != numRows - 1 && j + cycleLen - i < n)
                    ret.push_back(s[j + cycleLen - i]);
            }
        }
        return ret;
    }
};

#endif
