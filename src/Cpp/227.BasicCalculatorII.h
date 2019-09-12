
#ifndef __BASIC_CALCULATOR_H
#ifndef __BASIC_CALCULATOR_H

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
    cin->tie(NULL);
    return 0;
}();


class Solution {
public:
int calculate(string s) {
    int pre = 0, cur = 0, next = 0;
    int sign = '+';
    for (char ch : s) {
        if (ch == ' ') continue;
        if (ch >= '0' && ch <= '9') {
            next = 10 * next + (ch - '0');
        }
        else {
            process(pre, cur, next, sign);
            sign = ch;
        }
    }
    process(pre, cur, next, sign);
    return pre + cur;
}

void process(int& pre, int& cur, int& next, char sign) {
    if (sign == '+') {
        pre += cur;
        cur = next;
    }
    else if (sign == '-') {
        pre += cur;
        cur = -next;
    }
    else if (sign == '*') cur *= next;
    else cur /= next;
    next = 0;
}
};


#endif
