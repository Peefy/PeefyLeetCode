
#ifndef __NUMBER_DECONDINGS_H
#define __NUMBER_DECONDINGS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int numDecodings(string s) {
        int pp = 1;
        int p = (s[0] != '0') ? 1 : 0;
        for (int i = 1; i < s.length(); i++) {
            int twonumber = (s[i - 1] - '0') * 10 + s[i] - '0';
            int onenumber = s[i] - '0';
            int temp = p;
            p = pp * ((twonumber > 9 && twonumber <= 26) ? 1 : 0) + p * (onenumber > 0 ? 1 : 0);
            pp = temp;
        }
        return p;
    }
};

#endif
