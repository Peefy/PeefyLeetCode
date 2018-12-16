
#ifndef __JEWELS_AND_STONES_H
#define __JEWELS_AND_STONES_H

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
    int numJewelsInStones(string J, string S) {
        int count = 0;
        unordered_set<char> s;
        for (auto c : J){
            s.insert(c);
        }
        for (auto c : S){
            if (s.find(c) != s.end()){
                ++count;
            }
        }
        return count;
    }
};

#endif
