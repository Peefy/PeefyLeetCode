
#ifndef __COUNT_BINARY_SUBSTRINGS_H
#define __COUNT_BINARY_SUBSTRINGS_H

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
#include <numeric>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution{
  public:
    int countBinarySubstrings(string s){
        int res = 0, preLen = 0, curLen = 1;
        for (int i = 1; i < s.length(); i++){
            if (s[i] == s[i - 1])
                curLen += 1;
            else{
                preLen = curLen;
                curLen = 1;
            }
            if (preLen >= curLen)
                res += 1;
        }
        return res;
    }
};

#endif
