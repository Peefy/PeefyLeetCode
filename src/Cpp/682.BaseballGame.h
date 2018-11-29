
#ifndef __BASEBALL_GAME_H
#define __BASEBALL_GAME_H

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
    return 0;
}();

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> stack;
        for (string i : ops)
            if (i == "+")
                stack.push_back(stack[stack.size() - 1] + stack[stack.size() - 2]);
            else if (i == "C")
                stack.pop_back();
            else if (i == "D")
                stack.push_back(2 * stack[stack.size() - 1]);
            else
                stack.push_back(atoi(i.c_str()));
        return accumulate(stack.begin(), stack.end(), 0);
    }
};

#endif
