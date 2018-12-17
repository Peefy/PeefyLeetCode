
#ifndef __NUMBER_OF_LINES_H
#define __NUMBER_OF_LINES_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        vector<int> result(2);
        int sum = 0;
        int line = 1;
        for (char c : S) {
            sum = sum + widths[c - 97];
            if (sum > 100) {
                line++;
                sum = widths[c - 97];
            }

        }
        result[0] = line;
        result[1] = sum;
        return result;
    }
};

#endif

