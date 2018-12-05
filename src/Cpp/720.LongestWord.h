
#ifndef __IS_ONE_BIT_CHARACTER_H
#define __IS_ONE_BIT_CHARACTER_H

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();


class Solution {
public:
    string longestWord(vector<string>& words) {
        string best, temp;
        sort(words.begin(), words.end());
        for (int i = 0; i < words.size(); i++) {
            int len = words[i].length();
            if (temp.substr(0, len - 1) == words[i].substr(0, len - 1)) {
                temp = words[i];
                if (len > best.length())
                    best = words[i];
            }
        }
        return best;
    }
};

#endif
