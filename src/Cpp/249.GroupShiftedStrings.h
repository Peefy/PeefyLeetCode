
#ifndef __STROBOGRAMMATIC_NUMBER_II_H
#define __STROBOGRAMMATIC_NUMBER_II_H

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
    vector<vector<string>> groupStrings(vector<string>& strings) {
        vector<vector<string>> ans;
        unordered_map<string, multiset<string>>m;
        for (auto a : strings) {
            string t = "";
            for (char cc : a) {
                t = t + to_string((cc - a[0] + 26) % 26) + ",";
            }
            m[t].insert(a);
        }
        for (auto it = m.begin(); it != m.end(); it++) {
            ans.push_back(vector<string>(it->second.begin(), it->second.end()));
        }
        return ans;
    }
};

#endif
